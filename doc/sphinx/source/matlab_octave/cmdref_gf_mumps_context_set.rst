.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mumps_context_set
-------------------------------------------

**Synopsis**

::

  gf_mumps_context_set(mumps_context MC, 'matrix', mat A)
  gf_mumps_context_set(mumps_context MC, 'vector', vec b)
  gf_mumps_context_set(mumps_context MC, 'ICNTL', int ind, int val)
  gf_mumps_context_set(mumps_context MC, 'CNTL', int ind, scalar val)
  gf_mumps_context_set(mumps_context MC, 'analyze')
  gf_mumps_context_set(mumps_context MC, 'factorize')
  SOL = gf_mumps_context_set(mumps_context MC, 'solve')
  gf_mumps_context_set(mumps_context MC, 'analyze and factorize')
  SOL = gf_mumps_context_set(mumps_context MC, 'analyze factorize and solve')

**Description :**


  General function for modifying mumps_context objects
*/

void gf_mumps_context_set(getfemint::mexargs_in& in,
                          getfemint::mexargs_out& out) {

  if (in.narg() < 2) THROW_BADARG("Wrong number of input arguments");

  gmumps *pctx         = to_mumps_context_object(in.pop());
  std::string init_cmd = in.pop().to_string();
  std::string cmd      = cmd_normalize(init_cmd);

  if (check_cmd(cmd, "matrix", in, out, 1, 1, 0, 0)) {
    /*@SET ('matrix', mat A)
      Set the matrix mat A for the mumps_context object.

**Command list :**



  ``gf_mumps_context_set(mumps_context MC, 'matrix', mat A)``

    Set the matrix mat A for the mumps_context object.


  ``gf_mumps_context_set(mumps_context MC, 'vector', vec b)``

    Set the right hand side vec b for the mumps_context object.


  ``gf_mumps_context_set(mumps_context MC, 'ICNTL', int ind, int val)``

    Set the integer option at 1-based index `ind` in the ICNTL vector
    of the mumps_context object to value `val`.
    
    Capital naming convention is used to imply Fortran indexing.


  ``gf_mumps_context_set(mumps_context MC, 'CNTL', int ind, scalar val)``

    Set the scalar option at 1-based index `ind` in the CNTL vector
    of the mumps_context object to value `val`.
    
    Capital naming convention is used to imply Fortran indexing.


  ``gf_mumps_context_set(mumps_context MC, 'analyze')``

    Run the MUMPS analysis job for the mumps_context object.


  ``gf_mumps_context_set(mumps_context MC, 'factorize')``

    Run the MUMPS factorization job for the mumps_context object.


  ``SOL = gf_mumps_context_set(mumps_context MC, 'solve')``

    Run the MUMPS solve job (only) for the mumps_context object.
    
    The analysis and factorization jobs need to be run first
    before calling this function.


  ``gf_mumps_context_set(mumps_context MC, 'analyze and factorize')``

    Run the MUMPS analysis and factorization jobs for the mumps_context object.


  ``SOL = gf_mumps_context_set(mumps_context MC, 'analyze factorize and solve')``

    Run the MUMPS analysis, factorization and solve jobs for the mumps_context
    object. It returns the solution vector.

