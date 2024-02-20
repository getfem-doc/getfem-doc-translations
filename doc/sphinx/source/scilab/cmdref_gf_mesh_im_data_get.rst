.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_im_data_get
-------------------------------------------

**Synopsis**

::

  gf_mesh_im_data_get(mesh_im_data MID, 'region')
  gf_mesh_im_data_get(mesh_im_data MID, 'nbpts')
  gf_mesh_im_data_get(mesh_im_data MID, 'nb tensor elements')
  gf_mesh_im_data_get(mesh_im_data MID, 'tensor size')
  gf_mesh_im_data_get(mesh_im_data MID, 'display')
  m = gf_mesh_im_data_get(mesh_im_data MID, 'linked mesh')

**Description :**


  General function extracting information from mesh_im_data objects.
  

**Command list :**



  ``gf_mesh_im_data_get(mesh_im_data MID, 'region')``

    Output the region that the mesh_imd is restricted to.
    


  ``gf_mesh_im_data_get(mesh_im_data MID, 'nbpts')``

    Output the number of integration points (filtered in the considered region).
    


  ``gf_mesh_im_data_get(mesh_im_data MID, 'nb tensor elements')``

    Output the size of the stored data (per integration point).
    


  ``gf_mesh_im_data_get(mesh_im_data MID, 'tensor size')``

    Output the dimensions of the stored data (per integration point).
    


  ``gf_mesh_im_data_get(mesh_im_data MID, 'display')``

    displays a short summary for a mesh_imd object.


  ``m = gf_mesh_im_data_get(mesh_im_data MID, 'linked mesh')``

    Returns a reference to the mesh object linked to <literal>mim</literal>.
