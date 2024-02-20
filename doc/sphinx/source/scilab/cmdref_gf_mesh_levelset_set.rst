.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_levelset_set
-------------------------------------------

**Synopsis**

::

  gf_mesh_levelset_set(mesh_levelset MLS, 'add', levelset ls)
  gf_mesh_levelset_set(mesh_levelset MLS, 'sup', levelset ls)
  gf_mesh_levelset_set(mesh_levelset MLS, 'adapt')

**Description :**


  General function for modification of mesh_levelset objects.


**Command list :**



  ``gf_mesh_levelset_set(mesh_levelset MLS, 'add', levelset ls)``

    Add a link to the levelset <literal>ls</literal>.
    
    Only a reference is kept, no copy is done. In order to indicate
    that the linked mesh is cut by a levelset one has to call this
    method, where <literal>ls</literal> is an levelset object. An arbitrary number of
    levelset can be added.
    
    **WARNING**
    
    The mesh of <literal>ls</literal> and the linked mesh must be the same.


  ``gf_mesh_levelset_set(mesh_levelset MLS, 'sup', levelset ls)``

    Remove a link to the levelset <literal>ls</literal>.


  ``gf_mesh_levelset_set(mesh_levelset MLS, 'adapt')``

    Do all the work (cut the convexes with the levelsets).
    
    To initialice the mesh_levelset object or to actualize it when the
    value of any levelset function is modified, one has to call
    this method.
