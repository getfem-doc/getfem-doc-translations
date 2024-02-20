.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_integ_get
-------------------------------------------

**Synopsis**

::

  b = gf_integ_get(integ I, 'is_exact')
  d = gf_integ_get(integ I, 'dim')
  n = gf_integ_get(integ I, 'nbpts')
  Pp = gf_integ_get(integ I, 'pts')
  Pf = gf_integ_get(integ I, 'face_pts',F)
  Cp = gf_integ_get(integ I, 'coeffs')
  Cf = gf_integ_get(integ I, 'face_coeffs',F)
  s = gf_integ_get(integ I, 'char')
  gf_integ_get(integ I, 'display')

**Description :**


  General function for querying information about integration method objects.


**Command list :**



  ``b = gf_integ_get(integ I, 'is_exact')``

    Return 0 if the integration is an approximate one.


  ``d = gf_integ_get(integ I, 'dim')``

    Return the dimension of the reference convex of
    the method.


  ``n = gf_integ_get(integ I, 'nbpts')``

    Return the total number of integration points.
    
    Count the points for the volume integration, and points for
    surface integration on each face of the reference convex.
    
    Only for approximate methods, this has no meaning for exact
    integration methods!


  ``Pp = gf_integ_get(integ I, 'pts')``

    Return the list of integration points
    
    Only for approximate methods, this has no meaning for exact
    integration methods!


  ``Pf = gf_integ_get(integ I, 'face_pts',F)``

    Return the list of integration points for a face.
    
    Only for approximate methods, this has no meaning for exact
    integration methods!


  ``Cp = gf_integ_get(integ I, 'coeffs')``

    Returns the coefficients associated to each integration point.
    
    Only for approximate methods, this has no meaning for exact
    integration methods!


  ``Cf = gf_integ_get(integ I, 'face_coeffs',F)``

    Returns the coefficients associated to each integration of a face.
    
    Only for approximate methods, this has no meaning for exact
    integration methods!


  ``s = gf_integ_get(integ I, 'char')``

    Ouput a (unique) string representation of the integration method.
    
    This can be used to  comparisons between two different integ
    objects.


  ``gf_integ_get(integ I, 'display')``

    displays a short summary for a integ object.
