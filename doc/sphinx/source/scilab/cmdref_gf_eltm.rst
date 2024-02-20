.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_eltm
-------------------------------------------

**Synopsis**

::

  E = gf_eltm('base', fem FEM)
  E = gf_eltm('grad', fem FEM)
  E = gf_eltm('hessian', fem FEM)
  E = gf_eltm('normal')
  E = gf_eltm('grad_geotrans')
  E = gf_eltm('grad_geotrans_inv')
  E = gf_eltm('product', eltm A, eltm B)

**Description :**


General constructor for eltm objects.


  This object represents a type of elementary matrix. In order to obtain a
  numerical value of these matrices, see gf_mesh_im_get(mesh_im MI, 'eltm').

  If you have very particular assembling needs, or if you just want to check
  the content of an elementary matrix, this function might be useful. But
  the generic assembly abilities of gf_asm(...) should suit most needs.


**Command list :**



  ``E = gf_eltm('base', fem FEM)``

    return a descriptor for the integration of shape functions on
    elements, using the fem <literal>FEM</literal>. 


  ``E = gf_eltm('grad', fem FEM)``

    return a descriptor for the integration of the gradient of shape
    functions on elements, using the fem <literal>FEM</literal>.


  ``E = gf_eltm('hessian', fem FEM)``

    return a descriptor for the integration of the hessian of shape
    functions on elements, using the fem <literal>FEM</literal>.


  ``E = gf_eltm('normal')``

    return a descriptor for the unit normal of convex faces.


  ``E = gf_eltm('grad_geotrans')``

    return a descriptor to the gradient matrix of the geometric
    transformation.


  ``E = gf_eltm('grad_geotrans_inv')``

    return a descriptor to the inverse of the gradient matrix of the
    geometric transformation (this is rarely used).


  ``E = gf_eltm('product', eltm A, eltm B)``

    return a descriptor for the integration of the tensorial product of
    elementary matrices <literal>A</literal> and <literal>B</literal>.
