.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_spmat
-------------------------------------------

**Synopsis**

::

  SM = gf_spmat('empty', int m [, int n])
  SM = gf_spmat('copy', mat K [,  I [,  J=I]])
  SM = gf_spmat('identity', int n)
  SM = gf_spmat('mult', spmat A, spmat B)
  SM = gf_spmat('add', spmat A, spmat B)
  SM = gf_spmat('diag', mat D [, ivec E [, int n [,int m]]])
  SM = gf_spmat('load','hb'|'harwell-boeing'|'mm'|'matrix-market', string filename)

**Description :**


General constructor for spmat objects.

  Create a new sparse matrix in GetFEM format(, i.e. sparse
  matrices which are stored in the getfem workspace, not the matlab sparse
  matrices). These sparse matrix can be stored as CSC (compressed column
  sparse), which is the format used by Matlab, or they can be stored as WSC
  (internal format to getfem). The CSC matrices are not writable (it would
  be very inefficient), but they are optimized for multiplication with
  vectors, and memory usage. The WSC are writable, they are very fast with
  respect to random read/write operation. However their memory overhead is
  higher than CSC matrices, and they are a little bit slower for
  matrix-vector multiplications.

  By default, all newly created matrices are build as WSC matrices. This can
  be changed later with ``gf_spmat_set(spmat S, 'to_csc',...)``, or may be changed
  automatically by getfem (for example ``gf_linsolve()`` converts the
  matrices to CSC).

  The matrices may store REAL or COMPLEX values.


**Command list :**



  ``SM = gf_spmat('empty', int m [, int n])``

    Create a new empty (i.e. full of zeros) sparse matrix, of dimensions
    `m x n`. If `n` is omitted, the matrix dimension is `m x m`.


  ``SM = gf_spmat('copy', mat K [,  I [,  J=I]])``

    Duplicate a matrix `K` (which might be an spmat or a native matlab
    sparse matrix). If index `I` and/or `J` are given, the matrix will
    be a submatrix of `K`. For example::
    
      m = gf_spmat('copy', sprand(50,50,.1), 1:40, [6 7 8 3 10])
      
      
    
    will return a 40x5 matrix.


  ``SM = gf_spmat('identity', int n)``

    Create a `n x n` identity matrix.


  ``SM = gf_spmat('mult', spmat A, spmat B)``

    Create a sparse matrix as the product of the sparse matrices `A` and
    `B`. It requires that `A` and `B` be both real or both complex, you
    may have to use ``gf_spmat_set(spmat S, 'to_complex')`` 


  ``SM = gf_spmat('add', spmat A, spmat B)``

    Create a sparse matrix as the sum of the sparse matrices `A` and `B`.
    Adding a real matrix with a complex matrix is possible.


  ``SM = gf_spmat('diag', mat D [, ivec E [, int n [,int m]]])``

    Create a diagonal matrix. If `E` is given, `D` might be a matrix and
    each column of `E` will contain the sub-diagonal number that will be
    filled with the corresponding column of `D`.


  ``SM = gf_spmat('load','hb'|'harwell-boeing'|'mm'|'matrix-market', string filename)``

    Read a sparse matrix from an Harwell-Boeing or a Matrix-Market file
    See also ``gf_util('load matrix')``.

