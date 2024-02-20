.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_linsolve
-------------------------------------------

**Synopsis**

::

  X = gf_linsolve('gmres', spmat M, vec b[, int restart][, precond P][,'noisy'][,'res', r][,'maxiter', n])
  X = gf_linsolve('cg', spmat M, vec b [, precond P][,'noisy'][,'res', r][,'maxiter', n])
  X = gf_linsolve('bicgstab', spmat M, vec b [, precond P][,'noisy'][,'res', r][,'maxiter', n])
  {U, cond} = gf_linsolve('lu', spmat M, vec b)
  {U, cond} = gf_linsolve('superlu', spmat M, vec b)
  {U, cond} = gf_linsolve('mumps', spmat M, vec b)

**Description :**


  Various linear system solvers.


**Command list :**



  ``X = gf_linsolve('gmres', spmat M, vec b[, int restart][, precond P][,'noisy'][,'res', r][,'maxiter', n])``

    Solve `M.X = b` with the generalized minimum residuals method.
    
    Optionally using `P` as preconditioner. The default value of the
    restart parameter is 50.


  ``X = gf_linsolve('cg', spmat M, vec b [, precond P][,'noisy'][,'res', r][,'maxiter', n])``

    Solve `M.X = b` with the conjugated gradient method.
    
    Optionally using `P` as preconditioner.


  ``X = gf_linsolve('bicgstab', spmat M, vec b [, precond P][,'noisy'][,'res', r][,'maxiter', n])``

    Solve `M.X = b` with the bi-conjugated gradient stabilized method.
    
    Optionally using `P` as a preconditioner.


  ``{U, cond} = gf_linsolve('lu', spmat M, vec b)``

    Alias for gf_linsolve('superlu',...)


  ``{U, cond} = gf_linsolve('superlu', spmat M, vec b)``

    Solve `M.U = b` apply the SuperLU solver (sparse LU factorization).
    
    The condition number estimate `cond` is returned with the solution `U`.


  ``{U, cond} = gf_linsolve('mumps', spmat M, vec b)``

    Solve `M.U = b` using the MUMPS solver.
