.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_levelset_get
-------------------------------------------

**Synopsis**

::

  V = gf_levelset_get(levelset LS, 'values', int nls)
  d = gf_levelset_get(levelset LS, 'degree')
  mf = gf_levelset_get(levelset LS, 'mf')
  z = gf_levelset_get(levelset LS, 'memsize')
  s = gf_levelset_get(levelset LS, 'char')
  gf_levelset_get(levelset LS, 'display')

**Description :**


    General function for querying information about LEVELSET objects.


**Command list :**



  ``V = gf_levelset_get(levelset LS, 'values', int nls)``

    Return the vector of dof for `nls` function.
    
    If `nls` is 0, the method return the vector of dof for the primary
    level-set function. If `nls` is 1, the method return the vector of
    dof for the secondary level-set function (if any).


  ``d = gf_levelset_get(levelset LS, 'degree')``

    Return the degree of lagrange representation.


  ``mf = gf_levelset_get(levelset LS, 'mf')``

    Return a reference on the mesh_fem object.


  ``z = gf_levelset_get(levelset LS, 'memsize')``

    Return the amount of memory (in bytes) used by the level-set.


  ``s = gf_levelset_get(levelset LS, 'char')``

    Output a (unique) string representation of the levelset.
    
    This can be used to perform comparisons between two
    different levelset objects.
    This function is to be completed.


  ``gf_levelset_get(levelset LS, 'display')``

    displays a short summary for a levelset.

