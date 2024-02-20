.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_set
-------------------------------------------

**Synopsis**

::

  PIDs = gf_mesh_set(mesh M, 'pts', mat PTS)
  PIDs = gf_mesh_set(mesh M, 'add point', mat PTS)
  gf_mesh_set(mesh M, 'del point', ivec PIDs)
  CVIDs = gf_mesh_set(mesh M, 'add convex', geotrans GT, mat PTS)
  gf_mesh_set(mesh M, 'del convex', mat CVIDs)
  gf_mesh_set(mesh M, 'del convex of dim', ivec DIMs)
  gf_mesh_set(mesh M, 'translate', vec V)
  gf_mesh_set(mesh M, 'transform', mat T)
  gf_mesh_set(mesh M, 'boundary', int rnum, mat CVFIDs)
  gf_mesh_set(mesh M, 'region', int rnum, mat CVFIDs)
  gf_mesh_set(mesh M, 'extend region', int rnum, mat CVFIDs)
  gf_mesh_set(mesh M, 'region intersect', int r1, int r2)
  gf_mesh_set(mesh M, 'region merge', int r1, int r2)
  gf_mesh_set(mesh M, 'region subtract', int r1, int r2)
  gf_mesh_set(mesh M, 'delete boundary', int rnum, mat CVFIDs)
  gf_mesh_set(mesh M, 'delete region', ivec RIDs)
  gf_mesh_set(mesh M, 'merge', mesh m2[, scalar  tol])
  gf_mesh_set(mesh M, 'optimize structure'[, int with_renumbering])
  gf_mesh_set(mesh M, 'refine'[, ivec CVIDs])

**Description :**


  General function for modification of a mesh object.


**Command list :**



  ``PIDs = gf_mesh_set(mesh M, 'pts', mat PTS)``

    Replace the coordinates of the mesh points with those given in <literal>PTS</literal>.


  ``PIDs = gf_mesh_set(mesh M, 'add point', mat PTS)``

    Insert new points in the mesh and return their #ids.
    
    <literal>PTS</literal> should be an <literal></literal>nxm<literal></literal> matrix , where <literal></literal>n<literal></literal> is the mesh
    dimension, and <literal></literal>m<literal></literal> is the number of points that will be
    added to the mesh. On output, <literal>PIDs</literal> contains the point #ids
    of these new points.
    
    Remark: if some points are already part of the mesh (with a small
    tolerance of approximately <literal></literal>1e-8<literal></literal>), they won't be inserted again,
    and <literal>PIDs</literal> will contain the previously assigned #ids of these
    points.


  ``gf_mesh_set(mesh M, 'del point', ivec PIDs)``

    Removes one or more points from the mesh.
    
    <literal>PIDs</literal> should contain the point #ids, such as the one returned by
    the 'add point' command.


  ``CVIDs = gf_mesh_set(mesh M, 'add convex', geotrans GT, mat PTS)``

    Add a new convex into the mesh.
    
    The convex structure (triangle, prism,...) is given by <literal>GT</literal>
    (obtained with gf_geotrans('...')), and its points are given by
    the columns of <literal>PTS</literal>. On return, <literal>CVIDs</literal> contains the convex #ids.
    <literal>PTS</literal> might be a 3-dimensional array in order to insert more than
    one convex (or a two dimensional array correctly shaped according
    to Fortran ordering).


  ``gf_mesh_set(mesh M, 'del convex', mat CVIDs)``

    Remove one or more convexes from the mesh.
    
    <literal>CVIDs</literal> should contain the convexes #ids, such as the ones
    returned by the 'add convex' command.


  ``gf_mesh_set(mesh M, 'del convex of dim', ivec DIMs)``

    Remove all convexes of dimension listed in <literal>DIMs</literal>.
    
    For example; <literal></literal>gf_mesh_set(mesh M, 'del convex of dim', [1,2])<literal></literal> remove
    all line segments, triangles and quadrangles.


  ``gf_mesh_set(mesh M, 'translate', vec V)``

    Translates each point of the mesh from <literal>V</literal>.


  ``gf_mesh_set(mesh M, 'transform', mat T)``

    Applies the matrix <literal>T</literal> to each point of the mesh.
    
    Note that <literal>T</literal> is not required to be a <literal></literal>NxN<literal></literal> matrix (with
    <literal></literal>N = gf_mesh_get(mesh M, 'dim')<literal></literal>). Hence it is possible to transform
    a 2D mesh into a 3D one (and reciprocally).


  ``gf_mesh_set(mesh M, 'boundary', int rnum, mat CVFIDs)``

    DEPRECATED FUNCTION. Use 'region' instead.


  ``gf_mesh_set(mesh M, 'region', int rnum, mat CVFIDs)``

    Assigns the region number <literal>rnum</literal> to the set of convexes or/and convex
    faces provided in the matrix <literal>CVFIDs</literal>.
    
    The first row of <literal>CVFIDs</literal> contains convex #ids, and the second row
    contains a face number in the convex (or 0
    for the whole convex (regions are usually used to store a list of
    convex faces, but you may also use them to store a list of convexes).
    
    If a vector is provided (or a one row matrix) the region will represent
    the corresponding set of convex.


  ``gf_mesh_set(mesh M, 'extend region', int rnum, mat CVFIDs)``

    Extends the region identified by the region number <literal>rnum</literal> to include
    the set of convexes or/and convex faces provided in the matrix
    <literal>CVFIDs</literal>, see also <literal></literal>gf_mesh_set(mesh M, 'set region)<literal></literal>.


  ``gf_mesh_set(mesh M, 'region intersect', int r1, int r2)``

    Replace the region number <literal>r1</literal> with its intersection with region number <literal>r2</literal>.


  ``gf_mesh_set(mesh M, 'region merge', int r1, int r2)``

    Merge region number <literal>r2</literal> into region number <literal>r1</literal>.


  ``gf_mesh_set(mesh M, 'region subtract', int r1, int r2)``

    Replace the region number <literal>r1</literal> with its difference with region
    number <literal>r2</literal>.


  ``gf_mesh_set(mesh M, 'delete boundary', int rnum, mat CVFIDs)``

    DEPRECATED FUNCTION. Use 'delete region' instead.


  ``gf_mesh_set(mesh M, 'delete region', ivec RIDs)``

    Remove the regions whose #ids are listed in <literal>RIDs</literal>


  ``gf_mesh_set(mesh M, 'merge', mesh m2[, scalar  tol])``

    Merge with the mesh <literal>m2</literal>.
    
    Overlapping points, within a tolerance radius <literal>tol</literal>, will not be
    duplicated. If <literal>m2</literal> is a mesh_fem object, its linked mesh will be used.


  ``gf_mesh_set(mesh M, 'optimize structure'[, int with_renumbering])``

    Reset point and convex numbering.
    
    After optimisation, the points (resp. convexes) will
    be consecutively numbered from 1 to gf_mesh_get(mesh M, 'max pid')
    (resp. gf_mesh_get(mesh M, 'max cvid')).


  ``gf_mesh_set(mesh M, 'refine'[, ivec CVIDs])``

    Use a Bank strategy for mesh refinement.
    
    If <literal>CVIDs</literal> is not given, the whole mesh is refined. Note
    that the regions, and the finite element methods and
    integration methods of the mesh_fem and mesh_im objects linked
    to this mesh will be automagically refined.
