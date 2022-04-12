/* -*- c++ -*- (enables emacs c++ mode) */
/*===========================================================================
 
 Copyright (C) 2006-2012 Yves Renard, Julien Pommier.
 
 This file is a part of GetFEM++
 
 GetFEM++  is  free software;  you  can  redistribute  it  and/or modify it
 under  the  terms  of the  GNU  Lesser General Public License as published
 by  the  Free Software Foundation;  either version 2.1 of the License,  or
 (at your option) any later version.
 This program  is  distributed  in  the  hope  that it will be useful,  but
 WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 or  FITNESS  FOR  A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 License for more details.
 You  should  have received a copy of the GNU Lesser General Public License
 along  with  this program;  if not, write to the Free Software Foundation,
 Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA.
 
===========================================================================*/

/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */
#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netdb.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#include "gfi_rpc.h"
#include "gfm_common.h"

/* main file for the gf_matlab version using RPCs */

pid_t local_pid = 0;
char *remote_hostname = NULL;
int remote_port = -1;
int local_socket = -1;
int remote_socket = -1;

#ifndef PATH_MAX
#define PATH_MAX 1024 
#endif

#ifndef INVALID_SOCKET
#define INVALID_SOCKET -1
#endif


void sigint_callback(int sig) {
  fprintf(stderr, "*** CTRL-C hit during execution of a getfem_matlab function...\n" \
	  "You will gain control as soon as the current operation is finished ***\n" \
	  "If you want to abort immediatly the current operation, hit CTRL-C again\n" \
	  "(in that case, the getfem_matlab server will have to be restarted)");
}


void
gfmrpc_1(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  CLIENT *clnt;
  void  *test;
  gfi_output *out;
  gfi_array_list *in;
  char *function = NULL;
  /*static char saved_current_dir[PATH_MAX] = "";*/
  char current_dir[PATH_MAX];
  struct timeval tv;

  if (nrhs == 0 || !mxIsChar(prhs[0])) {
    mexErrMsgTxt("missing function name");
  }
  function = calloc(mxGetNumberOfElements(prhs[0])+1,1);
  if (mxGetString(prhs[0], function, mxGetNumberOfElements(prhs[0])+1))
    mexErrMsgTxt("mxGetString failure");
#ifndef	DEBUG
  /*clnt = clnt_create (host, GFMRPC, GFMRPC_VERS_1, "tcp");*/
  if (remote_hostname) {
    if (remote_port == -1) {
      clnt = clnt_create (remote_hostname, GFMRPC, GFMRPC_VERS_1, "tcp");
    } else {
      struct sockaddr_in addr;
      struct hostent *h = NULL;
      if ((h = gethostbyname(remote_hostname)) == NULL) {
        mexPrintf("can't get addr for %s\n",remote_hostname); mexErrMsgTxt("");
        return;
      }
      memset(&addr, 0, sizeof (addr));
      addr.sin_family = h->h_addrtype;
      addr.sin_port = htons(remote_port);
      bcopy(h->h_addr, (char*)&addr.sin_addr, h->h_length);
        /*      addr.sin_addr.s_addr = ((struct in_addr*)(h->h_addr))->s_addr;*/
      mexPrintf("creating client handle for %s:%d\n", remote_hostname,remote_port);
      if (remote_socket != -1) { close(remote_socket); remote_socket = RPC_ANYSOCK; }
      clnt=clnttcp_create (&addr, GFMRPC, GFMRPC_VERS_1, &remote_socket, 0, 0); 
    }
  } else {
    /*clnt = clnt_create (local_sockname, GFMRPC, GFMRPC_VERS_1, "unix");*/
    struct sockaddr_in sin;

    memset (&sin, 0, sizeof (sin));
    sin.sin_port = 1; /* do not call portmap (it would be stupid to require the portmap service  for this kind of connection!) */    
    clnt=clnttcp_create (&sin, GFMRPC, GFMRPC_VERS_1, &local_socket, 0, 0);
  }
  if (clnt == NULL) {
    clnt_pcreateerror (remote_hostname == NULL ? "localhost" : remote_hostname);
    return;
  } else {
    struct timeval tv;
    tv.tv_sec = 25;
    tv.tv_usec = 0;
    clnt_control(clnt, CLSET_TIMEOUT, (char*)&tv);
  }
#endif	/* DEBUG */

  test = gfmrpc_null_1(clnt);
  if (test == (void *) NULL) {
    mexPrintf("[oups] could not connect to getfem_matlab server...");
    clnt_perror(clnt, ""); goto cleanup;
  }
  getcwd(current_dir, PATH_MAX); current_dir[PATH_MAX-1]=0;
  /*  if (strcmp(current_dir, saved_current_dir)) {
      strcpy(saved_current_dir, current_dir);*/
    test = gfmrpc_chdir_1(current_dir, clnt);
    if (test == (void *) NULL) {
      mexPrintf("[get cwd] could not connect to getfem_matlab server...");
      clnt_perror (clnt, ""); goto cleanup;
    }
    /* }*/
  tv.tv_sec = 1000000; tv.tv_usec = 0;
  clnt_control(clnt, CLSET_TIMEOUT, (char*)&tv);
  in = build_gfi_array_list(nrhs-1, prhs+1);
  if (!in) mexErrMsgTxt("a problem occured while reading arguments");

  install_custom_sigint(sigint_callback);
  out = gfmrpc_call_1(MATLAB_INTERFACE, function, *in, nlhs, clnt);
  remove_custom_sigint(out && out->status == GFI_STATUS_OK);
  if (out == NULL) {
    mexPrintf("[getfem_server call] something went wrong...");
    clnt_perror (clnt, "");
  } else {
    if (out->infomsg && strlen(out->infomsg)) { mexPrintf("message from [gf_%s]:\n%s\n", function, out->infomsg); }

    if (out->status == GFI_STATUS_OK) {
      gfi_array_list *outl = &out->gfi_output_u.output;
      unsigned i;
      if (nlhs == 0 && outl->arg.arg_len > 0) { /* not very nice */
	mxArray *mx = gfi_array_to_mxarray(&outl->arg.arg_val[0]);
#if MATLAB_RELEASE == 12
	mexPutArray(mx, "caller"); mxSetName(mx,"ans");
#else
	mexPutVariable("caller", "ans", mx);
#endif
      }
      for (i=0; i < outl->arg.arg_len; ++i) {
        plhs[i] = gfi_array_to_mxarray(&outl->arg.arg_val[i]);              
        gfi_array_destroy(&outl->arg.arg_val[i]);
      }
      if (outl->arg.arg_val) free(outl->arg.arg_val);
    } else {
      mexErrMsgTxt(out->gfi_output_u.errmsg);
    }
  }
 cleanup:
#ifndef	DEBUG
  clnt_destroy (clnt);
#endif	 /* DEBUG */

}

int mxstringmatch(const mxArray *mx, const char *s) {
  if (mxIsChar(mx)) {
    char tmp[1000];
    mxGetString(mx,tmp,1000);
    return (strcasecmp(tmp,s) == 0);
  } else return 0;
}

char *mxallocstring(const mxArray *mx) {
  int n;
  char *s;
  if (!mxIsChar(mx)) { mexErrMsgTxt("string expected"); }
  n = mxGetNumberOfElements(mx);
  s = calloc(n+1,1);
  mxGetString(mx,s,n+1);
  return s;
}

void kill_local_session() {
  if (local_pid) {
    int status;
    mexPrintf("killing getfem_matlab (%d)..\n", local_pid);
    kill(local_pid, SIGINT);
    waitpid(local_pid, &status, 0);
    local_pid = 0;
  }
}

void start_local_session() {
  int sock[2];
  if (local_pid == 0) {
    if (socketpair(AF_UNIX, SOCK_STREAM, 0, sock) < 0) {
      mexErrMsgTxt("unable to create a socket for the server..");
    }
    mexPrintf("starting local getfem_server...\n");
    switch ((local_pid=fork())) {
    case -1: mexErrMsgTxt("can't fork !"); return;
    case 0: /* child */
      {
        close(sock[0]);
        dup2(sock[1],4); /* avoid stdin, stdout and stderr */
        setsid(); /* the server won't be killed by Ctrl-C pressed in matlab */
        execlp("getfem_server", "getfem_server", "-slave", NULL);
        fprintf(stderr, "execlp failure .. : %s\n", strerror(errno));
        exit(1); /* in case the exec failed */
      } break;
    default:
      {
        close(sock[1]);
	local_socket = sock[0];
      } break;
    }
  }
}

/* returns 0 if the child has not exited, or its pid */
int check_local_session() {
  int status;
  if (local_pid) {
    int res = waitpid(local_pid, &status, WNOHANG);
    /*fprintf(stderr,"wait(pid=%d)=%d ; status=%d [%s]\n", local_pid, res, status, strerror(errno));*/
    return (res == 0 ? local_pid : 0);
  } else return 0;
}

void exitfcn(void) {
  kill_local_session();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  static int once=0;
  if (once==0) { ++once; mexAtExit(exitfcn); }

  if (nrhs > 1 && mxstringmatch(prhs[0],"workspace")) {
    if (mxstringmatch(prhs[1], "connect") && nrhs >= 3) {
      kill_local_session();
      remote_hostname = mxallocstring(prhs[2]);
      if (nrhs == 4) remote_port = (int)(*mxGetPr(prhs[3]));
      mexPrintf("connection to %s", remote_hostname); 
      if (remote_port != -1) mexPrintf(", port %d\n", remote_port);
      else mexPrintf(", using portmap\n");
      return;
    }

  }
  local_pid = check_local_session();
  if (local_pid == 0 && remote_hostname == 0)
    start_local_session();
  if (local_pid != check_local_session()) {
    mexErrMsgTxt("could not launch the server, check that it is in the PATH");
    local_pid = 0;
  }

  gfmrpc_1(nlhs, plhs, nrhs, prhs);
}
