.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh
-------------------------------------------

**Synopsis**

::

  M = gf_mesh('empty', int dim)
  M = gf_mesh('cartesian', vec X[, vec Y[, vec Z,..]])
  M = gf_mesh('pyramidal', vec X[, vec Y[, vec Z,..]])
  M = gf_mesh('cartesian Q1', vec X, vec Y[, vec Z,..])
  M = gf_mesh('triangles grid', vec X, vec Y)
  M = gf_mesh('regular simplices', vec X[, vec Y[, vec Z,...]]['degree', int k]['noised'])
  M = gf_mesh('curved', mesh m, vec F)
  M = gf_mesh('prismatic', mesh m, int nl[, int degree])
  M = gf_mesh('pt2D', mat P, imat T[, int n])
  M = gf_mesh('ptND', mat P, imat T)
  M = gf_mesh('load', string filename)
  M = gf_mesh('from string', string s)
  M = gf_mesh('import', string format, string filename)
  M = gf_mesh('clone', mesh m2)
  M = gf_mesh('generate', mesher_object mo, scalar h[, int K = 1[, mat vertices]])

**Description :**


General constructor for mesh objects.

  This object is able to store any element in any dimension even if you mix
  elements with different dimensions.

  Note that for recent (> 6.0) versions of matlab, you should
  replace the calls to 'gf_mesh' with 'gfMesh' (this will instruct Matlab to
  consider the getfem mesh as a regular matlab object that can be
  manipulated with get() and set() methods).


**Command list :**



  ``M = gf_mesh('empty', int dim)``

    Create a new empty mesh.


  ``M = gf_mesh('cartesian', vec X[, vec Y[, vec Z,..]])``

    Build quickly a regular mesh of quadrangles, cubes, etc.


  ``M = gf_mesh('pyramidal', vec X[, vec Y[, vec Z,..]])``

    Build quickly a regular mesh of pyramids, etc.


  ``M = gf_mesh('cartesian Q1', vec X, vec Y[, vec Z,..])``

    Build quickly a regular mesh of quadrangles, cubes, etc. with
    Q1 elements.


  ``M = gf_mesh('triangles grid', vec X, vec Y)``

    Build quickly a regular mesh of triangles.
    
    This is a very limited and somehow deprecated function (See also
    ``gf_mesh('ptND')``, ``gf_mesh('regular simplices')`` and
    ``gf_mesh('cartesian')``).


  ``M = gf_mesh('regular simplices', vec X[, vec Y[, vec Z,...]]['degree', int k]['noised'])``

    Mesh a n-dimensional parallelepiped with simplices (triangles,
    tetrahedrons etc) .
    
    The optional degree may be used to build meshes with non linear
    geometric transformations.


  ``M = gf_mesh('curved', mesh m, vec F)``

    Build a curved (n+1)-dimensions mesh from a n-dimensions mesh `m`.
    
    The points of the new mesh have one additional coordinate, given by
    the vector `F`. This can be used to obtain meshes for shells. `m` may
    be a mesh_fem object, in that case its linked mesh will be used.


  ``M = gf_mesh('prismatic', mesh m, int nl[, int degree])``

    Extrude a prismatic mesh `M` from a mesh `m`.
    
    In the additional dimension there are `nl` layers of elements
    distributed from ``0`` to ``1``.
    If the optional parameter `degree` is provided with a value greater
    than the default value of ``1``, a non-linear transformation of
    corresponding degree is considered in the extrusion direction.


  ``M = gf_mesh('pt2D', mat P, imat T[, int n])``

    Build a mesh from a 2D triangulation.
    
    Each column of `P` contains a point coordinate, and each column of `T`
    contains the point indices of a triangle. `n` is optional and is a
    zone number. If `n` is specified then only the zone number `n` is
    converted (in that case, `T` is expected to have 4 rows, the fourth
    containing these zone numbers).
    
    Can be used to Convert a "pdetool" triangulation exported in
    variables P and T into a GETFEM mesh.


  ``M = gf_mesh('ptND', mat P, imat T)``

    Build a mesh from a n-dimensional "triangulation".
    
    Similar function to 'pt2D', for building simplexes meshes from a
    triangulation given in `T`, and a list of points given in `P`. The
    dimension of the mesh will be the number of rows of `P`, and the
    dimension of the simplexes will be the number of rows of `T`.


  ``M = gf_mesh('load', string filename)``

    Load a mesh from a GetFEM ascii mesh file.
    
    See also ``gf_mesh_get(mesh M, 'save', string filename)``.


  ``M = gf_mesh('from string', string s)``

    Load a mesh from a string description.
    
    For example, a string returned by ``gf_mesh_get(mesh M, 'char')``.


  ``M = gf_mesh('import', string format, string filename)``

    Import a mesh from the file `filename`.
    
    `format` may be:
    
    - 'gmsh' for a mesh created with `Gmsh`
    - 'gmsh_with_lower_dim_elt' for a mesh created with `Gmsh` and including elements of lower dimension than the mesh
    - 'gid' for a mesh created with `GiD`
    - 'cdb' for a mesh created with `ANSYS`
    - 'am_fmt' for a mesh created with `EMC2`
    - 'structured' for a structured cartesian mesh.
      In this case `filename` is a string describing the mesh
      e.g. "GT='GT_QK(2,2)';ORG=[0,0];SIZES=[1,1];NSUBDIV=[5,10]"
    - 'structured_ball' for a structured mesh of a circular disc or a sphere.
      In this case `filename` is a string describing the mesh
      "GT='GT_QK(2,2)';ORG=[0,0];SIZES=[4];NSUBDIV=[3,4];SYMMETRIES=1"
      The number of symmetries divides a circle into a half (1) or quarter
      of circle (2). Similarly a sphere can be divided with up to 3 symmetry
      planes.


  ``M = gf_mesh('clone', mesh m2)``

    Create a copy of a mesh.


  ``M = gf_mesh('generate', mesher_object mo, scalar h[, int K = 1[, mat vertices]])``

    Call the experimental mesher of GetFEM on the geometry represented
    by `mo`. Please control the conformity of the produced mesh. You can
    help the mesher by adding a priori vertices in the array `vertices`
    which should be of size ``n x m`` where ``n`` n is the dimension of
    the mesh and ``m`` the number of points. `h` is approximate diameter
    of the elements. `K` is the degree of the mesh (>1 for curved boundaries).
    The mesher will try to optimize the quality of the elements. This
    operation may be time consuming. Note that if the mesh generation fails,
    because of some random procedure used, it can be run again since it will
    not give necessarily the same result due to random procedures used.
    The messages send to the console by the mesh generation can be
    deactivated using `gf_util('trace level', 2)`. More information
    can be obtained by `gf_util('trace level', 4)`. See ``gf_mesher_object``
    to manipulate geometric primitives in order to describe the geometry.

