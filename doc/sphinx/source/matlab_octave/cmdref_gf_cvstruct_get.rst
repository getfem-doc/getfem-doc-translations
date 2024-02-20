.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_cvstruct_get
-------------------------------------------

**Synopsis**

::

  n = gf_cvstruct_get(cvstruct CVS, 'nbpts')
  d = gf_cvstruct_get(cvstruct CVS, 'dim')
  cs = gf_cvstruct_get(cvstruct CVS, 'basic structure')
  cs = gf_cvstruct_get(cvstruct CVS, 'face', int F)
  I = gf_cvstruct_get(cvstruct CVS, 'facepts', int F)
  s = gf_cvstruct_get(cvstruct CVS, 'char')
  gf_cvstruct_get(cvstruct CVS, 'display')

**Description :**


  General function for querying information about convex_structure objects.

  The convex structures are internal structures of GetFEM. They do not
  contain points positions. These structures are recursive, since the faces
  of a convex structures are convex structures.


**Command list :**



  ``n = gf_cvstruct_get(cvstruct CVS, 'nbpts')``

    Get the number of points of the convex structure.


  ``d = gf_cvstruct_get(cvstruct CVS, 'dim')``

    Get the dimension of the convex structure.


  ``cs = gf_cvstruct_get(cvstruct CVS, 'basic structure')``

    Get the simplest convex structure.
    
    For example, the 'basic structure' of the 6-node triangle, is the
    canonical 3-noded triangle.


  ``cs = gf_cvstruct_get(cvstruct CVS, 'face', int F)``

    Return the convex structure of the face `F`.


  ``I = gf_cvstruct_get(cvstruct CVS, 'facepts', int F)``

    Return the list of point indices for the face `F`.


  ``s = gf_cvstruct_get(cvstruct CVS, 'char')``

    Output a string description of the cvstruct.


  ``gf_cvstruct_get(cvstruct CVS, 'display')``

    displays a short summary for a cvstruct object.

