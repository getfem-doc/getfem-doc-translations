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
    <literal></literal>gf_mesh('ptND')<literal></literal>, <literal></literal>gf_mesh('regular simplices')<literal></literal> and
    <literal></literal>gf_mesh('cartesian')<literal></literal>).


  ``M = gf_mesh('regular simplices', vec X[, vec Y[, vec Z,...]]['degree', int k]['noised'])``

    Mesh a n-dimensional parallelepiped with simplices (triangles,
    tetrahedrons etc) .
    
    The optional degree may be used to build meshes with non linear
    geometric transformations.


  ``M = gf_mesh('curved', mesh m, vec F)``

    Build a curved (n+1)-dimensions mesh from a n-dimensions mesh <literal>m</literal>.
    
    The points of the new mesh have one additional coordinate, given by
    the vector <literal>F</literal>. This can be used to obtain meshes for shells. <literal>m</literal> may
    be a mesh_fem object, in that case its linked mesh will be used.


  ``M = gf_mesh('prismatic', mesh m, int nl[, int degree])``

    Extrude a prismatic mesh <literal>M</literal> from a mesh <literal>m</literal>.
    
    In the additional dimension there are <literal>nl</literal> layers of elements
    distributed from <literal></literal>0<literal></literal> to <literal></literal>1<literal></literal>.
    If the optional parameter <literal>degree</literal> is provided with a value greater
    than the default value of <literal></literal>1<literal></literal>, a non-linear transformation of
    corresponding degree is considered in the extrusion direction.


  ``M = gf_mesh('pt2D', mat P, imat T[, int n])``

    Build a mesh from a 2D triangulation.
    
    Each column of <literal>P</literal> contains a point coordinate, and each column of <literal>T</literal>
    contains the point indices of a triangle. <literal>n</literal> is optional and is a
    zone number. If <literal>n</literal> is specified then only the zone number <literal>n</literal> is
    converted (in that case, <literal>T</literal> is expected to have 4 rows, the fourth
    containing these zone numbers).
    
    


  ``M = gf_mesh('ptND', mat P, imat T)``

    Build a mesh from a n-dimensional "triangulation".
    
    Similar function to 'pt2D', for building simplexes meshes from a
    triangulation given in <literal>T</literal>, and a list of points given in <literal>P</literal>. The
    dimension of the mesh will be the number of rows of <literal>P</literal>, and the
    dimension of the simplexes will be the number of rows of <literal>T</literal>.


  ``M = gf_mesh('load', string filename)``

    Load a mesh from a GetFEM ascii mesh file.
    
    See also <literal></literal>gf_mesh_get(mesh M, 'save', string filename)<literal></literal>.


  ``M = gf_mesh('from string', string s)``

    Load a mesh from a string description.
    
    For example, a string returned by <literal></literal>gf_mesh_get(mesh M, 'char')<literal></literal>.


  ``M = gf_mesh('import', string format, string filename)``

    Import a mesh from the file <literal>filename</literal>.
    
    <literal>format</literal> may be:
    
    - 'gmsh' for a mesh created with <literal>Gmsh</literal>
    - 'gmsh_with_lower_dim_elt' for a mesh created with <literal>Gmsh</literal> and including elements of lower dimension than the mesh
    - 'gid' for a mesh created with <literal>GiD</literal>
    - 'cdb' for a mesh created with <literal>ANSYS</literal>
    - 'am_fmt' for a mesh created with <literal>EMC2</literal>
    - 'structured' for a structured cartesian mesh.
      In this case <literal>filename</literal> is a string describing the mesh
      e.g. "GT='GT_QK(2,2)';ORG=[0,0];SIZES=[1,1];NSUBDIV=[5,10]"
    - 'structured_ball' for a structured mesh of a circular disc or a sphere.
      In this case <literal>filename</literal> is a string describing the mesh
      "GT='GT_QK(2,2)';ORG=[0,0];SIZES=[4];NSUBDIV=[3,4];SYMMETRIES=1"
      The number of symmetries divides a circle into a half (1) or quarter
      of circle (2). Similarly a sphere can be divided with up to 3 symmetry
      planes.


  ``M = gf_mesh('clone', mesh m2)``

    Create a copy of a mesh.


  ``M = gf_mesh('generate', mesher_object mo, scalar h[, int K = 1[, mat vertices]])``

    Call the experimental mesher of GetFEM on the geometry represented
    by <literal>mo</literal>. Please control the conformity of the produced mesh. You can
    help the mesher by adding a priori vertices in the array <literal>vertices</literal>
    which should be of size <literal></literal>n x m<literal></literal> where <literal></literal>n<literal></literal> n is the dimension of
    the mesh and <literal></literal>m<literal></literal> the number of points. <literal>h</literal> is approximate diameter
    of the elements. <literal>K</literal> is the degree of the mesh (>1 for curved boundaries).
    The mesher will try to optimize the quality of the elements. This
    operation may be time consuming. Note that if the mesh generation fails,
    because of some random procedure used, it can be run again since it will
    not give necessarily the same result due to random procedures used.
    The messages send to the console by the mesh generation can be
    deactivated using <literal>gf_util('trace level', 2)</literal>. More information
    can be obtained by <literal>gf_util('trace level', 4)</literal>. See <literal></literal>gf_mesher_object<literal></literal>
    to manipulate geometric primitives in order to describe the geometry.

