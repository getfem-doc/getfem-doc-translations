.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_spmat_get
-------------------------------------------

**Synopsis**

::

  n = gf_spmat_get(spmat S, 'nnz')
  Sm = gf_spmat_get(spmat S, 'full'[, list I[, list J]])
  MV = gf_spmat_get(spmat S, 'mult', vec V)
  MtV = gf_spmat_get(spmat S, 'tmult', vec V)
  D = gf_spmat_get(spmat S, 'diag'[, list E])
  s = gf_spmat_get(spmat S, 'storage')
  {ni,nj} = gf_spmat_get(spmat S, 'size')
  b = gf_spmat_get(spmat S, 'is_complex')
  {JC, IR} = gf_spmat_get(spmat S, 'csc_ind')
  V = gf_spmat_get(spmat S, 'csc_val')
  {N, U0} = gf_spmat_get(spmat S, 'dirichlet nullspace', vec R)
  gf_spmat_get(spmat S, 'save', string format, string filename)
  s = gf_spmat_get(spmat S, 'char')
  gf_spmat_get(spmat S, 'display')
  {mantissa_r, mantissa_i, exponent} = gf_spmat_get(spmat S, 'determinant')

**Description :**




**Command list :**



  ``n = gf_spmat_get(spmat S, 'nnz')``

    Return the number of non-null values stored in the sparse matrix.


  ``Sm = gf_spmat_get(spmat S, 'full'[, list I[, list J]])``

    Return a full (sub-)matrix.
    
    The optional arguments `I` and `J`, are the sub-intervals for the
    rows and columns that are to be extracted.


  ``MV = gf_spmat_get(spmat S, 'mult', vec V)``

    Product of the sparse matrix `M` with a vector `V`.
    
    For matrix-matrix multiplications, see gf_spmat('mult').


  ``MtV = gf_spmat_get(spmat S, 'tmult', vec V)``

    Product of `M` transposed (conjugated if `M` is complex) with the
    vector `V`.


  ``D = gf_spmat_get(spmat S, 'diag'[, list E])``

    Return the diagonal of `M` as a vector.
    
    If `E` is used, return the sub-diagonals whose ranks are given in E.


  ``s = gf_spmat_get(spmat S, 'storage')``

    Return the storage type currently used for the matrix.
    
    The storage is returned as a string, either 'CSC' or 'WSC'.


  ``{ni,nj} = gf_spmat_get(spmat S, 'size')``

    Return a vector where `ni` and `nj` are the dimensions of the matrix.


  ``b = gf_spmat_get(spmat S, 'is_complex')``

    Return 1 if the matrix contains complex values.


  ``{JC, IR} = gf_spmat_get(spmat S, 'csc_ind')``

    Return the two usual index arrays of CSC storage.
    
    If `M` is not stored as a CSC matrix, it is converted into CSC.


  ``V = gf_spmat_get(spmat S, 'csc_val')``

    Return the array of values of all non-zero entries of `M`.
    
    If `M` is not stored as a CSC matrix, it is converted into CSC.


  ``{N, U0} = gf_spmat_get(spmat S, 'dirichlet nullspace', vec R)``

    Solve the dirichlet conditions `M.U=R`.
    
    A solution `U0` which has a minimum L2-norm is returned, with a
    sparse matrix `N` containing an orthogonal basis of the kernel of
    the (assembled) constraints matrix `M` (hence, the PDE linear system
    should be solved on this subspace): the initial problem
    
    `K.U = B` with constraints `M.U = R`
    
    is replaced by
    
    `(N'.K.N).UU = N'.B` with `U = N.UU + U0`


  ``gf_spmat_get(spmat S, 'save', string format, string filename)``

    Export the sparse matrix.
    
    the format of the file may be 'hb' for Harwell-Boeing, or 'mm'
    for Matrix-Market.


  ``s = gf_spmat_get(spmat S, 'char')``

    Output a (unique) string representation of the spmat.
    
    This can be used to perform comparisons between two
    different spmat objects.
    This function is to be completed.
    


  ``gf_spmat_get(spmat S, 'display')``

    displays a short summary for a spmat object.


  ``{mantissa_r, mantissa_i, exponent} = gf_spmat_get(spmat S, 'determinant')``

    returns the matrix determinant calculated using MUMPS.
