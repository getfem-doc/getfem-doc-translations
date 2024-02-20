.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_fem_set
-------------------------------------------

**Synopsis**

::

  gf_mesh_fem_set(mesh_fem MF, 'fem', fem f[, ivec CVids])
  gf_mesh_fem_set(mesh_fem MF, 'classical fem', int k[[, 'complete'], ivec CVids])
  gf_mesh_fem_set(mesh_fem MF, 'classical discontinuous fem', int k[[, 'complete'], @tscalar alpha[, ivec CVIDX]])
  gf_mesh_fem_set(mesh_fem MF, 'qdim', int Q)
  gf_mesh_fem_set(mesh_fem MF, 'reduction matrices', mat R, mat E)
  gf_mesh_fem_set(mesh_fem MF, 'reduction', int s)
  gf_mesh_fem_set(mesh_fem MF, 'reduce meshfem', mat RM)
  gf_mesh_fem_set(mesh_fem MF, 'dof partition', ivec DOFP)
  gf_mesh_fem_set(mesh_fem MF, 'set partial', ivec DOFs[, ivec RCVs])
  gf_mesh_fem_set(mesh_fem MF, 'adapt')
  gf_mesh_fem_set(mesh_fem MF, 'set enriched dofs', ivec DOFs)

**Description :**


  General function for modifying mesh_fem objects.
  

**Command list :**



  ``gf_mesh_fem_set(mesh_fem MF, 'fem', fem f[, ivec CVids])``

    Set the Finite Element Method.
    
    Assign an FEM `f` to all convexes whose #ids are listed in `CVids`.
    If `CVids` is not given, the integration is assigned to all convexes.
    
    See the help of gf_fem to obtain a list of available FEM methods.


  ``gf_mesh_fem_set(mesh_fem MF, 'classical fem', int k[[, 'complete'], ivec CVids])``

    Assign a classical (Lagrange polynomial) fem of order `k` to the mesh_fem.
    The option 'complete' requests complete Langrange polynomial elements,
    even if the element geometric transformation is an incomplete one
    (e.g. 8-node quadrilateral or 20-node hexahedral).
    
    Uses FEM_PK for simplexes, FEM_QK for parallelepipeds etc.


  ``gf_mesh_fem_set(mesh_fem MF, 'classical discontinuous fem', int k[[, 'complete'], @tscalar alpha[, ivec CVIDX]])``

    Assigns a classical (Lagrange polynomial) discontinuous fem of order k.
    
    Similar to gf_mesh_fem_set(mesh_fem MF, 'set classical fem') except that
    FEM_PK_DISCONTINUOUS is used. Param `alpha` the node inset,
    :math:`0 \leq alpha < 1`, where 0 implies usual dof nodes, greater values
    move the nodes toward the center of gravity, and 1 means that all
    degrees of freedom collapse on the center of gravity.
    The option 'complete' requests complete Langrange polynomial elements,
    even if the element geometric transformation is an incomplete one
    (e.g. 8-node quadrilateral or 20-node hexahedral).


  ``gf_mesh_fem_set(mesh_fem MF, 'qdim', int Q)``

    Change the `Q` dimension of the field that is interpolated by the mesh_fem.
    
    `Q = 1` means that the mesh_fem describes a scalar field, `Q = N` means
    that the mesh_fem describes a vector field of dimension N.


  ``gf_mesh_fem_set(mesh_fem MF, 'reduction matrices', mat R, mat E)``

    Set the reduction and extension matrices and valid their use.


  ``gf_mesh_fem_set(mesh_fem MF, 'reduction', int s)``

    Set or unset the use of the reduction/extension matrices.


  ``gf_mesh_fem_set(mesh_fem MF, 'reduce meshfem', mat RM)``

    Set reduction mesh fem
    This function selects the degrees of freedom of the finite element
    method by selecting a set of independent vectors of the matrix RM.
    The numer of columns of RM should corresponds to the number of degrees
    of freedom of the finite element method.  


  ``gf_mesh_fem_set(mesh_fem MF, 'dof partition', ivec DOFP)``

    Change the 'dof_partition' array.
    
    `DOFP` is a vector holding a integer value for each convex of the mesh_fem.
    See gf_mesh_fem_get(mesh_fem MF, 'dof partition') for a description of "dof partition".


  ``gf_mesh_fem_set(mesh_fem MF, 'set partial', ivec DOFs[, ivec RCVs])``

    Can only be applied to a partial mesh_fem. Change the subset of the
    degrees of freedom of `mf`.
    
    If `RCVs` is given, no FEM will be put on the convexes listed
    in `RCVs`.


  ``gf_mesh_fem_set(mesh_fem MF, 'adapt')``

    For a mesh_fem levelset object only. Adapt the mesh_fem object to a
    change of the levelset function. 


  ``gf_mesh_fem_set(mesh_fem MF, 'set enriched dofs', ivec DOFs)``

    For a mesh_fem product object only. Set te enriched dofs and adapt the mesh_fem product.
    
