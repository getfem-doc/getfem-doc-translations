.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_spmat
-------------------------------------------

**Synopsis**

::

  SM = gf_spmat('empty', int m [, int n])
  SM = gf_spmat('copy', mat K [,  I [,  J]])
  SM = gf_spmat('identity', int n)
  SM = gf_spmat('mult', spmat A, spmat B)
  SM = gf_spmat('add', spmat A, spmat B)
  SM = gf_spmat('diag', mat D [, ivec E [, int n [,int m]]])
  SM = gf_spmat('load','hb'|'harwell-boeing'|'mm'|'matrix-market', string filename)

**Description :**


General constructor for spmat objects.

  Create a new sparse matrix in getfem++ format. These sparse matrix can be stored as CSC (compressed column
  sparse), which is the format used by Matlab, or they can be stored as WSC
  (internal format to getfem). The CSC matrices are not writable (it would
  be very inefficient), but they are optimized for multiplication with
  vectors, and memory usage. The WSC are writable, they are very fast with
  respect to random read/write operation. However their memory overhead is
  higher than CSC matrices, and they are a little bit slower for
  matrix-vector multiplications.

  By default, all newly created matrices are build as WSC matrices. This can
  be changed later with <literal></literal>gf_spmat_set(spmat S, 'to_csc',...)<literal></literal>, or may be changed
  automatically by getfem (for example <literal></literal>gf_linsolve()<literal></literal> converts the
  matrices to CSC).

  The matrices may store REAL or COMPLEX values.


**Command list :**



  ``SM = gf_spmat('empty', int m [, int n])``

    Create a new empty (i.e. full of zeros) sparse matrix, of dimensions
    <literal>m x n</literal>. If <literal>n</literal> is omitted, the matrix dimension is <literal>m x m</literal>.


  ``SM = gf_spmat('copy', mat K [,  I [,  J]])``

    Duplicate a matrix <literal>K</literal> (which might be a spmat). If index <literal>I</literal> and/or <literal>J</literal> are given, the matrix will
    be a submatrix of <literal>K</literal>. For example::
    
      
      m = gf_spmat('copy', sprand(50,50,.1), 1:40, [6 7 8 3 10])
      
    
    will return a 40x5 matrix.


  ``SM = gf_spmat('identity', int n)``

    Create a <literal>n x n</literal> identity matrix.


  ``SM = gf_spmat('mult', spmat A, spmat B)``

    Create a sparse matrix as the product of the sparse matrices <literal>A</literal> and
    <literal>B</literal>. It requires that <literal>A</literal> and <literal>B</literal> be both real or both complex, you
    may have to use <literal></literal>gf_spmat_set(spmat S, 'to_complex')<literal></literal> 


  ``SM = gf_spmat('add', spmat A, spmat B)``

    Create a sparse matrix as the sum of the sparse matrices <literal>A</literal> and <literal>B</literal>.
    Adding a real matrix with a complex matrix is possible.


  ``SM = gf_spmat('diag', mat D [, ivec E [, int n [,int m]]])``

    Create a diagonal matrix. If <literal>E</literal> is given, <literal>D</literal> might be a matrix and
    each column of <literal>E</literal> will contain the sub-diagonal number that will be
    filled with the corresponding column of <literal>D</literal>.


  ``SM = gf_spmat('load','hb'|'harwell-boeing'|'mm'|'matrix-market', string filename)``

    Read a sparse matrix from an Harwell-Boeing or a Matrix-Market file
    .

