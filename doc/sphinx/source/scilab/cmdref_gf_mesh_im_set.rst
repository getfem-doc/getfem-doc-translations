.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_im_set
-------------------------------------------

**Synopsis**

::

  gf_mesh_im_set(mesh_im MI, 'integ',{integ im|int im_degree}[, ivec CVids])
  gf_mesh_im_set(mesh_im MI, 'adapt')

**Description :**


  General function for modifying mesh_im objects
  

**Command list :**



  ``gf_mesh_im_set(mesh_im MI, 'integ',{integ im|int im_degree}[, ivec CVids])``

    Set the integration method.
    
    Assign an integration method to all convexes whose #ids are
    listed in <literal>CVids</literal>. If <literal>CVids</literal> is not given, the integration is
    assigned to all convexes. It is possible to assign a specific
    integration method with an integration method handle <literal>im</literal> obtained
    via gf_integ('IM_SOMETHING'), or to let getfem choose a suitable
    integration method with <literal>im_degree</literal> (choosen such that polynomials
    of <latex style="text"><![CDATA[\text{degree} \leq \text{im\_degree}]]></latex> are exactly integrated.
    If <literal>im_degree=-1</literal>, then the dummy integration method IM_NONE will 
    be used.)


  ``gf_mesh_im_set(mesh_im MI, 'adapt')``

    For a mesh_im levelset object only. Adapt the integration methods to a
    change of the levelset function.

