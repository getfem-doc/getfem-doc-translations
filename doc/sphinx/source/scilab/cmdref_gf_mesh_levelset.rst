.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_levelset
-------------------------------------------

**Synopsis**

::

  MLS = gf_mesh_levelset(mesh m)

**Description :**


General constructor for mesh_levelset objects.

  General constructor for mesh_levelset objects. The role of this object is
  to provide a mesh cut by a certain number of level_set. This object is
  used to build conformal integration method (object mim and enriched finite
  element methods (Xfem)).
  

**Command list :**



  ``MLS = gf_mesh_levelset(mesh m)``

    Build a new mesh_levelset object from a mesh and returns its handle. 
