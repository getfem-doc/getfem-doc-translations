.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_im_data
-------------------------------------------

**Synopsis**

::

  MIMD = gf_mesh_im_data(mesh_im mim, int region, ivec size)

**Description :**


General constructor for mesh_im_data objects.

  This object represents data defined on a mesh_im object.


**Command list :**



  ``MIMD = gf_mesh_im_data(mesh_im mim, int region, ivec size)``

    Build a new mesh_imd object linked to a mesh_im object. If `region` is
    provided, considered integration points are filtered in this region.
    `size` is a vector of integers that specifies the dimensions of the
    stored data per integration point. If not given, the scalar stored
    data are considered.
    

