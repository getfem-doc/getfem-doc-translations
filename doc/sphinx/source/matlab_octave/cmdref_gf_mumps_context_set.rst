.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mumps_context_set
-------------------------------------------

**Synopsis**

::

  gf_mumps_context_set(mumps_context MC, 'matrix', mat A[, vec rows[, vec cols]])
  gf_mumps_context_set(mumps_context MC, 'distributed matrix', mat A[, vec rows[, vec cols]])
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


**Command list :**



  ``gf_mumps_context_set(mumps_context MC, 'matrix', mat A[, vec rows[, vec cols]])``

    Set mat A(rows,cols) as the matrix for the mumps_context object.
    
    Optional vectors vec rows and vec cols are used for selecting
    and/or permuting rows and columns from input matrix mat A.
    They are 0-based in Python and 1-based in Matlab/Octave.


  ``gf_mumps_context_set(mumps_context MC, 'distributed matrix', mat A[, vec rows[, vec cols]])``

    Set mat A(rows,cols) as the matrix A for the mumps_context object,
    distributed over all processes.
    It also sets ICNTL(5) to 0 and ICNTL(18) to 3.
    
    Optional vectors vec rows and vec cols are used for selecting
    and/or permuting rows and columns from input matrix mat A.
    They are 0-based in Python and 1-based in Matlab/Octave.


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

