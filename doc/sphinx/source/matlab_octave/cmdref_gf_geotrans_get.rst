.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_geotrans_get
-------------------------------------------

**Synopsis**

::

  d = gf_geotrans_get(geotrans GT, 'dim')
  b = gf_geotrans_get(geotrans GT, 'is_linear')
  n = gf_geotrans_get(geotrans GT, 'nbpts')
  P = gf_geotrans_get(geotrans GT, 'pts')
  N = gf_geotrans_get(geotrans GT, 'normals')
  Pt = gf_geotrans_get(geotrans GT, 'transform',mat G, mat Pr)
  s = gf_geotrans_get(geotrans GT, 'char')
  gf_geotrans_get(geotrans GT, 'display')

**Description :**


    General function for querying information about geometric transformations
    objects.


**Command list :**



  ``d = gf_geotrans_get(geotrans GT, 'dim')``

    Get the dimension of the geotrans.
    
    This is the dimension of the source space, i.e. the dimension of
    the reference convex.


  ``b = gf_geotrans_get(geotrans GT, 'is_linear')``

    Return 0 if the geotrans is not linear.


  ``n = gf_geotrans_get(geotrans GT, 'nbpts')``

    Return the number of points of the geotrans.


  ``P = gf_geotrans_get(geotrans GT, 'pts')``

    Return the reference convex points of the geotrans.
    
    The points are stored in the columns of the output matrix.


  ``N = gf_geotrans_get(geotrans GT, 'normals')``

    Get the normals for each face of the reference convex of the geotrans.
    
    The normals are stored in the columns of the output matrix.


  ``Pt = gf_geotrans_get(geotrans GT, 'transform',mat G, mat Pr)``

    Apply the geotrans to a set of points.
    
    `G` is the set of vertices of the real convex, `Pr` is the set
    of points (in the reference convex) that are to be transformed.
    The corresponding set of points in the real convex is returned.


  ``s = gf_geotrans_get(geotrans GT, 'char')``

    Output a (unique) string representation of the geotrans.
    
    This can be used to perform comparisons between two
    different geotrans objects. 


  ``gf_geotrans_get(geotrans GT, 'display')``

    displays a short summary for a geotrans object.
