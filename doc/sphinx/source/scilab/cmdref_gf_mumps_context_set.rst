.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mumps_context_set
-------------------------------------------

**Synopsis**

::

  gf_mumps_context_set(mumps_context MC, 'matrix', mat A)
  gf_mumps_context_set(mumps_context MC, 'distributed matrix', mat A)
  gf_mumps_context_set(mumps_context MC, 'vector', vec b)
  gf_mumps_context_set(mumps_context MC, 'ICNTL', int ind, int val)
  gf_mumps_context_set(mumps_context MC, 'CNTL', int ind, scalar val)
  gf_mumps_context_set(mumps_context MC, 'error check')
  gf_mumps_context_set(mumps_context MC, 'analyze')
  gf_mumps_context_set(mumps_context MC, 'factorize')
  SOL = gf_mumps_context_set(mumps_context MC, 'solve')
  gf_mumps_context_set(mumps_context MC, 'analyze and factorize')
  SOL = gf_mumps_context_set(mumps_context MC, 'factorize and solve')
  SOL = gf_mumps_context_set(mumps_context MC, 'analyze factorize and solve')

**Description :**


  General function for modifying mumps_context objects
*/

inline void return_mumps_solution(getfemint::mexargs_out& out,
                                  const gmumps *pctx) {
  if (out.remaining()) {
    if (pctx->is_complex()) {
      int nrhs = int(pctx->vector_c().size()) / pctx->nrows();
      GMM_ASSERT1(nrhs * pctx->nrows() == int(pctx->vector_c().size()),
                  "Inconsistent dimensions in MUMPS context object");
      if (nrhs == 1)
        out.pop().from_dcvector(pctx->vector_c());
      else {
        carray x = out.pop().create_carray(pctx->nrows(), nrhs);
        gmm::copy(pctx->vector_c(), x);
      }
    } else {
      int nrhs = int(pctx->vector_r().size()) / pctx->nrows();
      GMM_ASSERT1(nrhs * pctx->nrows() == int(pctx->vector_r().size()),
                  "Inconsistent dimensions in MUMPS context object");
      if (nrhs == 1)
        out.pop().from_dcvector(pctx->vector_r());
      else {
        darray x = out.pop().create_darray(pctx->nrows(), nrhs);
        gmm::copy(pctx->vector_r(), x);
      }
    }
  }
}


void gf_mumps_context_set(getfemint::mexargs_in& in,
                          getfemint::mexargs_out& out) {

  if (in.narg() < 2) THROW_BADARG("Wrong number of input arguments");

  gmumps *pctx         = to_mumps_context_object(in.pop());
  std::string init_cmd = in.pop().to_string();
  std::string cmd      = cmd_normalize(init_cmd);

  bool distributed_matrix =
    check_cmd(cmd, "distributed matrix", in, out, 1, 1, 0, 0);
  if (distributed_matrix ||
      check_cmd(cmd, "matrix", in, out, 1, 1, 0, 0)) {
    /*@SET ('matrix', mat A)
      Set the matrix mat A for the mumps_context object.

**Command list :**



  ``gf_mumps_context_set(mumps_context MC, 'matrix', mat A)``

    Set the matrix mat A for the mumps_context object.


  ``gf_mumps_context_set(mumps_context MC, 'distributed matrix', mat A)``

    Set the matrix mat A for the mumps_context object distributed over all
    processes. It also sets ICNTL(5) to 0 and ICNTL(18) to 3.


  ``gf_mumps_context_set(mumps_context MC, 'vector', vec b)``

    Set the right hand side vec b for the mumps_context object.


  ``gf_mumps_context_set(mumps_context MC, 'ICNTL', int ind, int val)``

    Set the integer option at 1-based index <literal>ind</literal> in the ICNTL vector
    of the mumps_context object to value <literal>val</literal>.
    
    Capital naming convention is used to imply Fortran indexing.


  ``gf_mumps_context_set(mumps_context MC, 'CNTL', int ind, scalar val)``

    Set the scalar option at 1-based index <literal>ind</literal> in the CNTL vector
    of the mumps_context object to value <literal>val</literal>.
    
    Capital naming convention is used to imply Fortran indexing.


  ``gf_mumps_context_set(mumps_context MC, 'error check')``

    Check the error status of the mumps_context object.


  ``gf_mumps_context_set(mumps_context MC, 'analyze')``

    Run the MUMPS analysis job for the mumps_context object.


  ``gf_mumps_context_set(mumps_context MC, 'factorize')``

    Run the MUMPS factorization job for the mumps_context object.


  ``SOL = gf_mumps_context_set(mumps_context MC, 'solve')``

    Run the MUMPS solve job (only) for the mumps_context object.
    
    The analysis and factorization jobs need to be run first
    before calling this function. An error check is performed after
    the solve.
    
    It returns the solution vector (on all processes if MPI is used).


  ``gf_mumps_context_set(mumps_context MC, 'analyze and factorize')``

    Run the MUMPS analysis and factorization jobs for the mumps_context object.


  ``SOL = gf_mumps_context_set(mumps_context MC, 'factorize and solve')``

    Run the MUMPS factorization and solve jobs for the mumps_context object.
    
    The analysis job needs to be run first before calling this function.
    An error check is performed after the solve.
    
    It returns the solution vector (on all processes if MPI is used).


  ``SOL = gf_mumps_context_set(mumps_context MC, 'analyze factorize and solve')``

    Run the MUMPS analysis, factorization and solve jobs for the mumps_context
    object. An error check is also performed after the solve.
    
    It returns the solution vector (on all processes if MPI is used).

