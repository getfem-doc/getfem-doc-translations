.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_compute
-------------------------------------------

**Synopsis**

::

  n = gf_compute(mesh_fem MF, vec U, 'L2 norm', mesh_im mim[, mat CVids])
  n = gf_compute(mesh_fem MF, vec U, 'L2 dist', mesh_im mim, mesh_fem mf2, vec U2[, mat CVids])
  n = gf_compute(mesh_fem MF, vec U, 'H1 semi norm', mesh_im mim[, mat CVids])
  n = gf_compute(mesh_fem MF, vec U, 'H1 semi dist', mesh_im mim, mesh_fem mf2, vec U2[, mat CVids])
  n = gf_compute(mesh_fem MF, vec U, 'H1 norm', mesh_im mim[, mat CVids])
  n = gf_compute(mesh_fem MF, vec U, 'H2 semi norm', mesh_im mim[, mat CVids])
  n = gf_compute(mesh_fem MF, vec U, 'H2 norm', mesh_im mim[, mat CVids])
  DU = gf_compute(mesh_fem MF, vec U, 'gradient', mesh_fem mf_du)
  HU = gf_compute(mesh_fem MF, vec U, 'hessian', mesh_fem mf_h)
  UP = gf_compute(mesh_fem MF, vec U, 'eval on triangulated surface', int Nrefine, [vec CVLIST])
  Ui = gf_compute(mesh_fem MF, vec U, 'interpolate on', {mesh_fem mfi | slice sli | vec pts})
  Ue = gf_compute(mesh_fem MF, vec U, 'extrapolate on', mesh_fem mfe)
  E = gf_compute(mesh_fem MF, vec U, 'error estimate', mesh_im mim)
  E = gf_compute(mesh_fem MF, vec U, 'error estimate nitsche', mesh_im mim, int GAMMAC, int GAMMAN, scalar lambda_, scalar mu_, scalar gamma0, scalar f_coeff, scalar vertical_force)
  gf_compute(mesh_fem MF, vec U, 'convect', mesh_fem mf_v, vec V, scalar dt, int nt[, string option[, vec per_min, vec per_max]])

**Description :**


  
  Various computations involving the solution U to a finite element problem.


**Command list :**



  ``n = gf_compute(mesh_fem MF, vec U, 'L2 norm', mesh_im mim[, mat CVids])``

    Compute the L2 norm of the (real or complex) field <literal>U</literal>.
    
    If <literal>CVids</literal> is given, the norm will be computed only on the listed
    elements.


  ``n = gf_compute(mesh_fem MF, vec U, 'L2 dist', mesh_im mim, mesh_fem mf2, vec U2[, mat CVids])``

    Compute the L2 distance between <literal>U</literal> and <literal>U2</literal>.
    
    If <literal>CVids</literal> is given, the norm will be computed only on the listed
    elements.


  ``n = gf_compute(mesh_fem MF, vec U, 'H1 semi norm', mesh_im mim[, mat CVids])``

    Compute the L2 norm of grad(<literal>U</literal>).
    
    If <literal>CVids</literal> is given, the norm will be computed only on the listed
    elements.


  ``n = gf_compute(mesh_fem MF, vec U, 'H1 semi dist', mesh_im mim, mesh_fem mf2, vec U2[, mat CVids])``

    Compute the semi H1 distance between <literal>U</literal> and <literal>U2</literal>.
    
    If <literal>CVids</literal> is given, the norm will be computed only on the listed
    elements.


  ``n = gf_compute(mesh_fem MF, vec U, 'H1 norm', mesh_im mim[, mat CVids])``

    Compute the H1 norm of <literal>U</literal>.
    
    If <literal>CVids</literal> is given, the norm will be computed only on the listed
    elements.


  ``n = gf_compute(mesh_fem MF, vec U, 'H2 semi norm', mesh_im mim[, mat CVids])``

    Compute the L2 norm of D^2(<literal>U</literal>).
    
    If <literal>CVids</literal> is given, the norm will be computed only on the listed
    elements.


  ``n = gf_compute(mesh_fem MF, vec U, 'H2 norm', mesh_im mim[, mat CVids])``

    Compute the H2 norm of <literal>U</literal>.
    
    If <literal>CVids</literal> is given, the norm will be computed only on the listed
    elements.


  ``DU = gf_compute(mesh_fem MF, vec U, 'gradient', mesh_fem mf_du)``

    Compute the gradient of the field <literal>U</literal> defined on mesh_fem <literal>mf_du</literal>.
    
    The gradient is interpolated on the mesh_fem <literal>mf_du</literal>, and returned in
    <literal>DU</literal>. For example, if <literal>U</literal> is defined on a P2 mesh_fem, <literal>DU</literal> should be
    evaluated on a P1-discontinuous mesh_fem. <literal>mf</literal> and <literal>mf_du</literal> should
    share the same mesh.
    
    <literal>U</literal> may have any number of dimensions (i.e. this function is not
    restricted to the gradient of scalar fields, but may also be used
    for tensor fields). However the last dimension of <literal>U</literal> has to be
    equal to the number of dof of <literal>mf</literal>. For example, if <literal>U</literal> is a
    [3x3xNmf] array (where Nmf is the number of dof of <literal>mf</literal>), <literal>DU</literal> will
    be a [Nx3x3[xQ]xNmf_du] array, where N is the dimension of the mesh,
    Nmf_du is the number of dof of <literal>mf_du</literal>, and the optional Q dimension
    is inserted if <literal>Qdim_mf != Qdim_mf_du</literal>, where Qdim_mf is the Qdim of
    <literal>mf</literal> and Qdim_mf_du is the Qdim of <literal>mf_du</literal>.


  ``HU = gf_compute(mesh_fem MF, vec U, 'hessian', mesh_fem mf_h)``

    Compute the hessian of the field <literal>U</literal> defined on mesh_fem <literal>mf_h</literal>.
    
    See also gf_compute('gradient', mesh_fem mf_du).


  ``UP = gf_compute(mesh_fem MF, vec U, 'eval on triangulated surface', int Nrefine, [vec CVLIST])``

    [OBSOLETE FUNCTION! will be removed in a future release]
    Utility function designed for 2D triangular meshes : returns a list
    of triangles coordinates with interpolated U values. This can be
    used for the accurate visualization of data defined on a
    discontinous high order element. On output, the six first rows of UP
    contains the triangle coordinates, and the others rows contain the
    interpolated values of U (one for each triangle vertex) CVLIST may
    indicate the list of convex number that should be consider, if not
    used then all the mesh convexes will be used. U should be a row
    vector.


  ``Ui = gf_compute(mesh_fem MF, vec U, 'interpolate on', {mesh_fem mfi | slice sli | vec pts})``

    Interpolate a field on another mesh_fem or a slice or a list of points.
    
    - Interpolation on another mesh_fem <literal>mfi</literal>:
       <literal>mfi</literal> has to be Lagrangian. If <literal>mf</literal> and <literal>mfi</literal> share the same
       mesh object, the interpolation will be much faster.
    - Interpolation on a slice <literal>sli</literal>:
       this is similar to interpolation on a refined P1-discontinuous
       mesh, but it is much faster. This can also be used with
       gf_slice('points') to obtain field values at a given set of
       points.
    - Interpolation on a set of points <literal>pts</literal>
    
    See also gf_asm('interpolation matrix')


  ``Ue = gf_compute(mesh_fem MF, vec U, 'extrapolate on', mesh_fem mfe)``

    Extrapolate a field on another mesh_fem.
    
    If the mesh of <literal>mfe</literal> is stricly included in the mesh of <literal>mf</literal>, this
    function does stricly the same job as gf_compute('interpolate_on').
    However, if the mesh of <literal>mfe</literal> is not exactly included in <literal>mf</literal>
    (imagine interpolation between a curved refined mesh and a coarse
    mesh), then values which are outside <literal>mf</literal> will be
    extrapolated.
    
    See also gf_asm('extrapolation matrix')


  ``E = gf_compute(mesh_fem MF, vec U, 'error estimate', mesh_im mim)``

    Compute an a posteriori error estimate.
    
    Currently there is only one which is available: for each convex,
    the jump of the normal derivative is integrated on its faces.


  ``E = gf_compute(mesh_fem MF, vec U, 'error estimate nitsche', mesh_im mim, int GAMMAC, int GAMMAN, scalar lambda_, scalar mu_, scalar gamma0, scalar f_coeff, scalar vertical_force)``

    Compute an a posteriori error estimate in the case of Nitsche method.
    
    Currently there is only one which is available: for each convex,
    the jump of the normal derivative is integrated on its faces.


  ``gf_compute(mesh_fem MF, vec U, 'convect', mesh_fem mf_v, vec V, scalar dt, int nt[, string option[, vec per_min, vec per_max]])``

    Compute a convection of <literal>U</literal> with regards to a steady state velocity
    field <literal>V</literal> with a Characteristic-Galerkin method. The result is returned
    in-place in <literal>U</literal>.
    This method is restricted to pure Lagrange fems for U. <literal>mf_v</literal> should
    represent a continuous finite element method. <literal>dt</literal> is the integration time
    and <literal>nt</literal> is the number of integration step on the caracteristics. <literal>option</literal>
    is an option for the part of the boundary where there is a re-entrant
    convection.
    <literal>option = 'extrapolation'</literal> for an extrapolation on the nearest element,
    <literal>option = 'unchanged'</literal> for a constant value on that boundary or
    <literal>option = 'periodicity'</literal> for a peridiodic boundary. For this latter option
    the two vectors per_min, per_max has to be given and represent the limits
    of the periodic domain (on components where per_max[k] < per_min[k]
    no operation is done).
    This method is rather dissipative, but stable.

