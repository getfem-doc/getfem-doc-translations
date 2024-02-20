.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_precond
-------------------------------------------

**Synopsis**

::

  PC = gf_precond('identity')
  PC = gf_precond('cidentity')
  PC = gf_precond('diagonal', vec D)
  PC = gf_precond('ildlt', spmat m)
  PC = gf_precond('ilu', spmat m)
  PC = gf_precond('ildltt', spmat m[, int fillin[, scalar threshold]])
  PC = gf_precond('ilut', spmat m[, int fillin[, scalar threshold]])
  PC = gf_precond('superlu', spmat m)
  PC = gf_precond('spmat', spmat m)

**Description :**


General constructor for precond objects.

  The preconditioners may store REAL or COMPLEX values. They accept getfem
  sparse matrices and Matlab sparse matrices.


**Command list :**



  ``PC = gf_precond('identity')``

    Create a REAL identity precondioner.


  ``PC = gf_precond('cidentity')``

    Create a COMPLEX identity precondioner.


  ``PC = gf_precond('diagonal', vec D)``

    Create a diagonal precondioner.


  ``PC = gf_precond('ildlt', spmat m)``

    Create an ILDLT (Cholesky) preconditioner for the (symmetric) sparse
    matrix `m`. This preconditioner has the same sparsity pattern than `m`
    (no fill-in).


  ``PC = gf_precond('ilu', spmat m)``

    Create an ILU (Incomplete LU) preconditioner for the sparse
    matrix `m`. This preconditioner has the same sparsity pattern
    than `m` (no fill-in).  


  ``PC = gf_precond('ildltt', spmat m[, int fillin[, scalar threshold]])``

    Create an ILDLTT (Cholesky with filling) preconditioner for the
    (symmetric) sparse matrix `m`. The preconditioner may add at most
    `fillin` additional non-zero entries on each line. The default value
    for `fillin` is 10, and the default threshold is1e-7.


  ``PC = gf_precond('ilut', spmat m[, int fillin[, scalar threshold]])``

    Create an ILUT (Incomplete LU with filling) preconditioner for the
    sparse matrix `m`. The preconditioner may add at most `fillin`
    additional non-zero entries on each line. The default value for
    `fillin` is 10, and the default threshold is 1e-7.


  ``PC = gf_precond('superlu', spmat m)``

    Uses SuperLU to build an exact factorization of the sparse matrix `m`.
    This preconditioner is only available if the getfem-interface was
    built with SuperLU support. Note that LU factorization is likely to
    eat all your memory for 3D problems.


  ``PC = gf_precond('spmat', spmat m)``

    Preconditioner given explicitely by a sparse matrix.

