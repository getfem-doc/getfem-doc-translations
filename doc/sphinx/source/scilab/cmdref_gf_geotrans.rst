.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_geotrans
-------------------------------------------

**Synopsis**

::

  GT = gf_geotrans(string name)

**Description :**


General constructor for geotrans objects.

   The geometric transformation must be used when you are building a custom
   mesh convex by convex (see the add_convex() function of mesh): it also
   defines the kind of convex (triangle, hexahedron, prism, etc..)
  

**Command list :**



  ``GT = gf_geotrans(string name)``

    The name argument contains the specification of the geometric transformation
    as a string, which may be:
    
      - GT_PK(n,k) :
        Transformation on simplexes, dim <literal>n</literal>, degree <literal>k</literal>.
      - GT_QK(n,k) :
        Transformation on parallelepipeds, dim <literal>n</literal>, degree <literal>k</literal>.
      - GT_PRISM(n,k) :
        Transformation on prisms, dim <literal>n</literal>, degree <literal>k</literal>.
      - GT_PRODUCT(A,B) :
        Tensorial product of two transformations.
      - GT_LINEAR_PRODUCT(geotrans gt1,geotrans gt2) :
        Linear tensorial product of two transformations
    

