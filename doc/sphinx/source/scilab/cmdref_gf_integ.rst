.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_integ
-------------------------------------------

**Synopsis**

::

  I = gf_integ(string method)

**Description :**


General constructor for integ objects.

  General object for obtaining handles to various integrations methods on
  convexes (used when the elementary matrices are built).


**Command list :**



  ``I = gf_integ(string method)``

    Here is a list of some integration methods defined in GetFEM (see the
    description of finite element and integration methods for a complete
    reference):
    
     - IM_EXACT_SIMPLEX(n) :
       Exact integration on simplices (works only with linear geometric
       transformations and PK fem's).
     - IM_PRODUCT(A,B) :
       Product of two integration methods.
     - IM_EXACT_PARALLELEPIPED(n) :
       Exact integration on parallelepipeds.
     - IM_EXACT_PRISM(n) :
       Exact integration on prisms.
     - IM_GAUSS1D(k) :
       Gauss method on the segment, order <literal>k=1,3,...,99</literal>.
     - IM_NC(n,k) :
       Newton-Cotes approximative integration on simplexes, order <literal>k</literal>.
     - IM_NC_PARALLELEPIPED(n,k) :
       Product of Newton-Cotes integration on parallelepipeds.
     - IM_NC_PRISM(n,k) :
       Product of Newton-Cotes integration on prisms.
     - IM_GAUSS_PARALLELEPIPED(n,k) :
       Product of Gauss1D integration on parallelepipeds.
     - IM_TRIANGLE(k) :
       Gauss methods on triangles <literal>k=1,3,5,6,7,8,9,10,13,17,19</literal>.
     - IM_QUAD(k) :
       Gauss methods on quadrilaterons <literal>k=2,3,5, ...,17</literal>. Note that
       IM_GAUSS_PARALLELEPIPED should be prefered for QK fem's.
     - IM_TETRAHEDRON(k) :
       Gauss methods on tetrahedrons <literal>k=1,2,3,5,6 or 8</literal>.
     - IM_SIMPLEX4D(3) :
       Gauss method on a 4-dimensional simplex.
     - IM_STRUCTURED_COMPOSITE(im,k) :
       Composite method on a grid with <literal>k</literal> divisions.
     - IM_HCT_COMPOSITE(im) :
       Composite integration suited to the HCT composite finite element.
    
    Example:
    
     - I = gf_integ('IM_PRODUCT(IM_GAUSS1D(5),IM_GAUSS1D(5))')
    
    is the same as:
    
     - I = gf_integ('IM_GAUSS_PARALLELEPIPED(2,5)')
    
    Note that 'exact integration' should be avoided in general, since they
    only apply to linear geometric transformations, are quite slow, and
    subject to numerical stability problems for high degree fem's. 

