.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mumps_context_get
-------------------------------------------

**Synopsis**

::

  gf_mumps_context_get(mumps_context MC, 'display')
  K = gf_mumps_context_get(mumps_context MC, 'matrix')
  vec = gf_mumps_context_get(mumps_context MC, 'vector')
  VAL = gf_mumps_context_get(mumps_context MC, 'ICNTL', int ind)
  VAL = gf_mumps_context_get(mumps_context MC, 'INFOG', int ind)
  VAL = gf_mumps_context_get(mumps_context MC, 'RINFO', int ind)
  VAL = gf_mumps_context_get(mumps_context MC, 'RINFOG', int ind)

**Description :**


  General function for querying information about a mumps_context object.
*/

void gf_mumps_context_get(getfemint::mexargs_in& in,
                          getfemint::mexargs_out& out) {

  if (in.narg() < 2) THROW_BADARG("Wrong number of input arguments");

  const gmumps *pctx   = to_mumps_context_object(in.pop());
  std::string init_cmd = in.pop().to_string();
  std::string cmd      = cmd_normalize(init_cmd);

  if (check_cmd(cmd, "display", in, out, 0, 0, 0, 0)) {
    /*@GET ('display')
      Display a short summary for a mumps_context object.

**Command list :**



  ``gf_mumps_context_get(mumps_context MC, 'display')``

    Display a short summary for a mumps_context object.


  ``K = gf_mumps_context_get(mumps_context MC, 'matrix')``

    The mumps_context object in the scripting API cannot return
    a reference to the ija matrix stored in C++. It just
    displays information about the stored matrix.


  ``vec = gf_mumps_context_get(mumps_context MC, 'vector')``

    Outputs a copy of the vector stored in the mumps_context object.
    Before the solution, it contains the right hand side of the system.
    After the solution, it contains the solution.


  ``VAL = gf_mumps_context_get(mumps_context MC, 'ICNTL', int ind)``

    Output the ICNTL array entry at 1-based index <literal>ind</literal> stored in
    the mumps_context object.
    
    Capital naming convention is used to imply Fortran indexing.


  ``VAL = gf_mumps_context_get(mumps_context MC, 'INFOG', int ind)``

    Output the INFOG array entry at 1-based index <literal>ind</literal> stored in
    the mumps_context object.
    
    Capital naming convention is used to imply Fortran indexing.


  ``VAL = gf_mumps_context_get(mumps_context MC, 'RINFO', int ind)``

    Output the RINFO array entry at 1-based index <literal>ind</literal> stored in
    the mumps_context object.
    
    Capital naming convention is used to imply Fortran indexing.


  ``VAL = gf_mumps_context_get(mumps_context MC, 'RINFOG', int ind)``

    Output the RINFOG array entry at 1-based index <literal>ind</literal> stored in
    the mumps_context object.
    
    Capital naming convention is used to imply Fortran indexing.

