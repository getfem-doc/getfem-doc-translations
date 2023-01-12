.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_fem
-------------------------------------------

**Synopsis**

::

  MF = gf_mesh_fem(mesh m[, int Qdim1=1[, int Qdim2=1, ...]])
  MF = gf_mesh_fem('load', string fname[, mesh m])
  MF = gf_mesh_fem('from string', string s[, mesh m])
  MF = gf_mesh_fem('clone', mesh_fem mf)
  MF = gf_mesh_fem('sum', mesh_fem mf1, mesh_fem mf2[, mesh_fem mf3[, ...]])
  MF = gf_mesh_fem('product', mesh_fem mf1, mesh_fem mf2)
  MF = gf_mesh_fem('levelset', mesh_levelset mls, mesh_fem mf)
  MF = gf_mesh_fem('global function', mesh m, levelset ls, {global_function GF1,...}[, int Qdim_m])
  MF = gf_mesh_fem('bspline', mesh m, int NX, int NY, int order)
  MF = gf_mesh_fem('partial', mesh_fem mf, ivec DOFs[, ivec RCVs])

**Description :**


General constructor for mesh_fem objects.

  This object represents a finite element method defined on a whole mesh.


**Command list :**



  ``MF = gf_mesh_fem(mesh m[, int Qdim1=1[, int Qdim2=1, ...]])``

    Build a new mesh_fem object.
    
    The <literal>Qdim</literal> parameters specifies the dimension of the field represented
    by the finite element method. Qdim1 = 1 for a scalar field,
    Qdim1 = n for a vector field off size n, Qdim1=m, Qdim2=n for
    a matrix field of size mxn ...
    Returns the handle of the created object. 


  ``MF = gf_mesh_fem('load', string fname[, mesh m])``

    Load a mesh_fem from a file.
    
    If the mesh <literal>m</literal> is not supplied (this kind of file does not store the
    mesh), then it is read from the file <literal>fname</literal> and its descriptor is
    returned as the second output argument.


  ``MF = gf_mesh_fem('from string', string s[, mesh m])``

    Create a mesh_fem object from its string description.
    
    See also <literal></literal>gf_mesh_fem_get(mesh_fem MF, 'char')<literal></literal>


  ``MF = gf_mesh_fem('clone', mesh_fem mf)``

    Create a copy of a mesh_fem.


  ``MF = gf_mesh_fem('sum', mesh_fem mf1, mesh_fem mf2[, mesh_fem mf3[, ...]])``

    Create a mesh_fem that spans two (or more) mesh_fem's.
    
    All mesh_fem must share the same mesh.
    
    After that, you should not modify the FEM of <literal>mf1</literal>, <literal>mf2</literal> etc.


  ``MF = gf_mesh_fem('product', mesh_fem mf1, mesh_fem mf2)``

    Create a mesh_fem that spans all the product of a selection of shape
    functions of <literal>mf1</literal> by all shape functions of <literal>mf2</literal>.
    Designed for Xfem enrichment.
    
    <literal>mf1</literal> and <literal>mf2</literal> must share the same mesh.
    
    After that, you should not modify the FEM of <literal>mf1</literal>, <literal>mf2</literal>.


  ``MF = gf_mesh_fem('levelset', mesh_levelset mls, mesh_fem mf)``

    Create a mesh_fem that is conformal to implicit surfaces defined in
    mesh_levelset.


  ``MF = gf_mesh_fem('global function', mesh m, levelset ls, {global_function GF1,...}[, int Qdim_m])``

    Create a mesh_fem whose base functions are global function given by the
    user in the system of coordinate defined by the iso-values of the two
    level-set function of <literal>ls</literal>. 


  ``MF = gf_mesh_fem('bspline', mesh m, int NX, int NY, int order)``

    Create a mesh_fem on mesh <literal>m</literal>, whose basis functions are global functions
    corresponding to bspline basis of order <literal>order</literal>, in an NX x NY grid
    that spans the entire bounding box of <literal>m</literal>. 


  ``MF = gf_mesh_fem('partial', mesh_fem mf, ivec DOFs[, ivec RCVs])``

    Build a restricted mesh_fem by keeping only a subset of the degrees of
    freedom of <literal>mf</literal>.
    
    If <literal>RCVs</literal> is given, no FEM will be put on the convexes listed in
    <literal>RCVs</literal>.

