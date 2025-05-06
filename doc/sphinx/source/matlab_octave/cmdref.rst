.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc


.. include:: ../replaces.txt

.. highlight:: matlab

.. _mlab-cmdref:

Command reference
=================

Please remember that this documentation is not self contained.
You should in particular refer to the `user documentation`_ 
to have a more extensive description of the structures algorithms 
and concepts used.


The expected type of each function argument is indicated in this 
reference. Here is a list of these types:

=====================  ==================================================
`int`                  integer value
`hobj`                 a handle for any GetFEM object
`scalar`               scalar value
`string`               string
`ivec`                 vector of integer values
`vec`                  vector
`imat`                 matrix of integer values
`mat`                  matrix
`spmat`                sparse matrix (both matlab native sparse
                       matrices, and GetFEM sparse matrices)
`precond`              GetFEM preconditioner object
`mesh mesh`            object descriptor (or gfMesh object)
`mesh_fem`             mesh fem object descriptor (or gfMeshFem object)
`mesh_im`              mesh im object descriptor (or gfMeshIm object)
`mesh_im_data`         mesh im data object descriptor (or gfMeshImData object)
`mesh_slice`           mesh slice object descriptor (or gfSlice object)
`cvstruct`             convex structure descriptor (or gfCvStruct object)
`geotrans`             geometric transformation descriptor (or 
                       gfGeoTrans object)
`fem`                  fem descriptor (or gfFem object)
`eltm`                 elementary matrix descriptor (or gfEltm object)
`integ`                integration method descriptor (or gfInteg object)
`model`                model descriptor (or gfModel object)
`global_function`      global function descriptor
`mesher_object`        mesher object descriptor
`cont_struct`          continuation-structure descriptor
`mumps_context`        mumps context descriptor (or gfMumpsContext object)
=====================  ==================================================

Arguments listed between square brackets are optional. Lists between braces indicate that the argument must match one of the elements of the list. For example::

  >> [X,Y]=dummy(int i, 'foo' | 'bar' [,vec v])

means that the dummy function takes two or three arguments, its first being an integer value, the second a string which is either 'foo' or 'bar', and a third optional argument. It returns two values (with the usual matlab meaning, i.e. the caller can always choose to ignore them).



.. toctree::
   :maxdepth: 3

   cmdref_gf_asm
   cmdref_gf_compute
   cmdref_gf_cont_struct
   cmdref_gf_cont_struct_get
   cmdref_gf_cvstruct_get
   cmdref_gf_delete
   cmdref_gf_eltm
   cmdref_gf_fem
   cmdref_gf_fem_get
   cmdref_gf_geotrans
   cmdref_gf_geotrans_get
   cmdref_gf_global_function
   cmdref_gf_global_function_get
   cmdref_gf_integ
   cmdref_gf_integ_get
   cmdref_gf_levelset
   cmdref_gf_levelset_get
   cmdref_gf_levelset_set
   cmdref_gf_linsolve
   cmdref_gf_mesh
   cmdref_gf_mesh_get
   cmdref_gf_mesh_set
   cmdref_gf_mesh_fem
   cmdref_gf_mesh_fem_get
   cmdref_gf_mesh_fem_set
   cmdref_gf_mesh_im
   cmdref_gf_mesh_im_get
   cmdref_gf_mesh_im_set
   cmdref_gf_mesh_im_data
   cmdref_gf_mesh_im_data_get
   cmdref_gf_mesh_im_data_set
   cmdref_gf_mesh_levelset
   cmdref_gf_mesh_levelset_get
   cmdref_gf_mesh_levelset_set
   cmdref_gf_mesher_object
   cmdref_gf_mesher_object_get
   cmdref_gf_model
   cmdref_gf_model_get
   cmdref_gf_model_set
   cmdref_gf_mumps_context
   cmdref_gf_mumps_context_get
   cmdref_gf_mumps_context_set
   cmdref_gf_poly
   cmdref_gf_precond
   cmdref_gf_precond_get
   cmdref_gf_slice
   cmdref_gf_slice_get
   cmdref_gf_slice_set
   cmdref_gf_spmat
   cmdref_gf_spmat_get
   cmdref_gf_spmat_set
   cmdref_gf_util
   cmdref_gf_workspace
