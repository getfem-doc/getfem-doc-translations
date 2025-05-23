.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_model_set
-------------------------------------------

**Synopsis**

::

  gf_model_set(model M, 'clear')
  gf_model_set(model M, 'add fem variable', string name, mesh_fem mf)
  gf_model_set(model M, 'add filtered fem variable', string name, mesh_fem mf, int region)
  gf_model_set(model M, 'add im variable', string name, mesh_imd mimd)
  gf_model_set(model M, 'add internal im variable', string name, mesh_imd mimd)
  gf_model_set(model M, 'add variable', string name, sizes)
  gf_model_set(model M, 'delete variable', string name)
  gf_model_set(model M, 'resize variable', string name, sizes)
  gf_model_set(model M, 'add multiplier', string name, mesh_fem mf, string primalname[, mesh_im mim, int region])
  gf_model_set(model M, 'add im data', string name, mesh_imd mimd)
  gf_model_set(model M, 'add fem data', string name, mesh_fem mf[, sizes])
  gf_model_set(model M, 'add initialized fem data', string name, mesh_fem mf, vec V[, sizes])
  gf_model_set(model M, 'add data', string name, int size)
  gf_model_set(model M, 'add macro', string name, string expr)
  gf_model_set(model M, 'del macro', string name)
  gf_model_set(model M, 'add initialized data', string name, vec V[, sizes])
  gf_model_set(model M, 'variable', string name, vec V)
  gf_model_set(model M, 'to variables', vec V[, bool with_internal])
  gf_model_set(model M, 'delete brick', int ind_brick)
  gf_model_set(model M, 'define variable group', string name[, string varname, ...])
  gf_model_set(model M, 'add elementary rotated RT0 projection', string transname)
  gf_model_set(model M, 'add elementary P0 projection', string transname)
  gf_model_set(model M, 'add HHO reconstructed gradient', string transname)
  gf_model_set(model M, 'add HHO reconstructed symmetrized gradient', string transname)
  gf_model_set(model M, 'add HHO reconstructed value', string transname)
  gf_model_set(model M, 'add HHO reconstructed symmetrized value', string transname)
  gf_model_set(model M, 'add HHO stabilization', string transname)
  gf_model_set(model M, 'add HHO symmetrized stabilization', string transname)
  gf_model_set(model M, 'add interpolate transformation from expression', string transname, mesh source_mesh, mesh target_mesh, string expr)
  gf_model_set(model M, 'add element extrapolation transformation', string transname, mesh source_mesh, mat elt_corr)
  gf_model_set(model M, 'add standard secondary domain', string name, mesh_im mim, int region = -1)
  gf_model_set(model M, 'set element extrapolation correspondence', string transname, mat elt_corr)
  gf_model_set(model M, 'add raytracing transformation', string transname, scalar release_distance)
  gf_model_set(model M, 'add master contact boundary to raytracing transformation', string transname, mesh m, string dispname, int region)
  gf_model_set(model M, 'add slave contact boundary to raytracing transformation', string transname, mesh m, string dispname, int region)
  gf_model_set(model M, 'add rigid obstacle to raytracing transformation', string transname, string expr, int N)
  gf_model_set(model M, 'add projection transformation', string transname, scalar release_distance)
  gf_model_set(model M, 'add master contact boundary to projection transformation', string transname, mesh m, string dispname, int region)
  gf_model_set(model M, 'add slave contact boundary to projection transformation', string transname, mesh m, string dispname, int region)
  gf_model_set(model M, 'add rigid obstacle to projection transformation', string transname, string expr, int N)
  ind = gf_model_set(model M, 'add linear term', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])
  ind = gf_model_set(model M, 'add linear twodomain term', mesh_im mim, string expression, int region, string secondary_domain[, int is_symmetric[, int is_coercive]])
  ind = gf_model_set(model M, 'add linear generic assembly brick', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])
  ind = gf_model_set(model M, 'add nonlinear term', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])
  ind = gf_model_set(model M, 'add nonlinear twodomain term', mesh_im mim, string expression, int region, string secondary_domain[, int is_symmetric[, int is_coercive]])
  ind = gf_model_set(model M, 'add nonlinear generic assembly brick', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])
  ind = gf_model_set(model M, 'add source term', mesh_im mim, string expression[, int region])
  ind = gf_model_set(model M, 'add twodomain source term', mesh_im mim, string expression, int region, string secondary_domain)
  ind = gf_model_set(model M, 'add source term generic assembly brick', mesh_im mim, string expression[, int region])
  gf_model_set(model M, 'add assembly assignment', string dataname, string expression[, int region[, int order[, int before]]])
  gf_model_set(model M, 'clear assembly assignment')
  ind = gf_model_set(model M, 'add Laplacian brick', mesh_im mim, string varname[, int region])
  ind = gf_model_set(model M, 'add generic elliptic brick', mesh_im mim, string varname, string dataname[, int region])
  ind = gf_model_set(model M, 'add source term brick', mesh_im mim, string varname, string dataexpr[, int region[, string directdataname]])
  ind = gf_model_set(model M, 'add normal source term brick', mesh_im mim, string varname, string dataname, int region)
  ind = gf_model_set(model M, 'add Dirichlet condition with simplification', string varname, int region[, string dataname])
  ind = gf_model_set(model M, 'add Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region[, string dataname])
  ind = gf_model_set(model M, 'add Dirichlet condition with Nitsche method', mesh_im mim, string varname, string Neumannterm, string datagamma0, int region[, scalar theta][, string dataname])
  ind = gf_model_set(model M, 'add Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region[, string dataname, mesh_fem mf_mult])
  ind = gf_model_set(model M, 'add normal Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region[, string dataname])
  ind = gf_model_set(model M, 'add normal Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region[, string dataname, mesh_fem mf_mult])
  ind = gf_model_set(model M, 'add normal Dirichlet condition with Nitsche method', mesh_im mim, string varname, string Neumannterm, string gamma0name, int region[, scalar theta][, string dataname])
  ind = gf_model_set(model M, 'add generalized Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region, string dataname, string Hname)
  ind = gf_model_set(model M, 'add generalized Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region, string dataname, string Hname[, mesh_fem mf_mult])
  ind = gf_model_set(model M, 'add generalized Dirichlet condition with Nitsche method', mesh_im mim, string varname, string Neumannterm, string gamma0name, int region[, scalar theta], string dataname, string Hname)
  ind = gf_model_set(model M, 'add pointwise constraints with multipliers', string varname, string dataname_pt[, string dataname_unitv] [, string dataname_val])
  ind = gf_model_set(model M, 'add pointwise constraints with given multipliers', string varname, string multname, string dataname_pt[, string dataname_unitv] [, string dataname_val])
  ind = gf_model_set(model M, 'add pointwise constraints with penalization', string varname, scalar coeff, string dataname_pt[, string dataname_unitv] [, string dataname_val])
  gf_model_set(model M, 'change penalization coeff', int ind_brick, scalar coeff)
  ind = gf_model_set(model M, 'add Helmholtz brick', mesh_im mim, string varname, string dataexpr[, int region])
  ind = gf_model_set(model M, 'add Fourier Robin brick', mesh_im mim, string varname, string dataexpr, int region)
  ind = gf_model_set(model M, 'add constraint with multipliers', string varname, string multname, spmat B, {vec L | string dataname})
  ind = gf_model_set(model M, 'add constraint with penalization', string varname, scalar coeff, spmat B, {vec L | string dataname})
  ind = gf_model_set(model M, 'add explicit matrix', string varname1, string varname2, spmat B[, int issymmetric[, int iscoercive]])
  ind = gf_model_set(model M, 'add explicit rhs', string varname, vec L)
  gf_model_set(model M, 'set private matrix', int indbrick, spmat B)
  gf_model_set(model M, 'set private rhs', int indbrick, vec B)
  ind = gf_model_set(model M, 'add isotropic linearized elasticity brick', mesh_im mim, string varname, string dataname_lambda, string dataname_mu[, int region])
  ind = gf_model_set(model M, 'add isotropic linearized elasticity pstrain brick', mesh_im mim, string varname, string data_E, string data_nu[, int region])
  ind = gf_model_set(model M, 'add isotropic linearized elasticity pstress brick', mesh_im mim, string varname, string data_E, string data_nu[, int region])
  ind = gf_model_set(model M, 'add linear incompressibility brick', mesh_im mim, string varname, string multname_pressure[, int region[, string dataexpr_coeff]])
  ind = gf_model_set(model M, 'add nonlinear elasticity brick', mesh_im mim, string varname, string constitutive_law, string dataname[, int region])
  ind = gf_model_set(model M, 'add finite strain elasticity brick', mesh_im mim, string constitutive_law, string varname, string params[, int region])
  ind = gf_model_set(model M, 'add small strain elastoplasticity brick', mesh_im mim,  string lawname, string unknowns_type [, string varnames, ...] [, string params, ...] [, string theta = '1' [, string dt = 'timestep']] [, int region = -1])
  ind = gf_model_set(model M, 'add elastoplasticity brick', mesh_im mim ,string projname, string varname, string previous_dep_name, string datalambda, string datamu, string datathreshold, string datasigma[, int region])
  ind = gf_model_set(model M, 'add finite strain elastoplasticity brick', mesh_im mim , string lawname, string unknowns_type [, string varnames, ...] [, string params, ...] [, int region = -1])
  ind = gf_model_set(model M, 'add nonlinear incompressibility brick', mesh_im mim, string varname, string multname_pressure[, int region])
  ind = gf_model_set(model M, 'add finite strain incompressibility brick', mesh_im mim, string varname, string multname_pressure[, int region])
  ind = gf_model_set(model M, 'add bilaplacian brick', mesh_im mim, string varname, string dataname [, int region])
  ind = gf_model_set(model M, 'add Kirchhoff-Love plate brick', mesh_im mim, string varname, string dataname_D, string dataname_nu [, int region])
  ind = gf_model_set(model M, 'add normal derivative source term brick', mesh_im mim, string varname, string dataname, int region)
  ind = gf_model_set(model M, 'add Kirchhoff-Love Neumann term brick', mesh_im mim, string varname, string dataname_M, string dataname_divM, int region)
  ind = gf_model_set(model M, 'add normal derivative Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region [, string dataname, int R_must_be_derivated])
  ind = gf_model_set(model M, 'add normal derivative Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region [, string dataname, int R_must_be_derivated])
  ind = gf_model_set(model M, 'add Mindlin Reissner plate brick', mesh_im mim, mesh_im mim_reduced, string varname_u3, string varname_theta , string param_E, string param_nu, string param_epsilon, string param_kappa [,int variant [, int region]])
  ind = gf_model_set(model M, 'add enriched Mindlin Reissner plate brick', mesh_im mim, mesh_im mim_reduced1, mesh_im mim_reduced2, string varname_ua, string varname_theta,string varname_u3, string varname_theta3 , string param_E, string param_nu, string param_epsilon [,int variant [, int region]])
  ind = gf_model_set(model M, 'add mass brick', mesh_im mim, string varname[, string dataexpr_rho[, int region]])
  ind = gf_model_set(model M, 'add lumped mass for first order brick', mesh_im mim, string varname[, string dataexpr_rho[, int region]])
  gf_model_set(model M, 'shift variables for time integration')
  gf_model_set(model M, 'perform init time derivative', scalar ddt)
  gf_model_set(model M, 'set time step', scalar dt)
  gf_model_set(model M, 'set time', scalar t)
  gf_model_set(model M, 'add theta method for first order', string varname, scalar theta)
  gf_model_set(model M, 'add theta method for second order', string varname, scalar theta)
  gf_model_set(model M, 'add Newmark scheme', string varname, scalar beta, scalar gamma)
  gf_model_set(model M, 'add_Houbolt_scheme', string varname)
  gf_model_set(model M, 'disable bricks', ivec bricks_indices)
  gf_model_set(model M, 'enable bricks', ivec bricks_indices)
  gf_model_set(model M, 'disable variable', string varname)
  gf_model_set(model M, 'enable variable', string varname)
  gf_model_set(model M, 'first iter')
  gf_model_set(model M, 'next iter')
  ind = gf_model_set(model M, 'add basic contact brick', string varname_u, string multname_n[, string multname_t], string dataname_r, spmat BN[, spmat BT, string dataname_friction_coeff][, string dataname_gap[, string dataname_alpha[, int augmented_version[, string dataname_gamma, string dataname_wt]]])
  ind = gf_model_set(model M, 'add basic contact brick two deformable bodies', string varname_u1, string varname_u2, string multname_n, string dataname_r, spmat BN1, spmat BN2[, string dataname_gap[, string dataname_alpha[, int augmented_version]]])
  gf_model_set(model M, 'contact brick set BN', int indbrick, spmat BN)
  gf_model_set(model M, 'contact brick set BT', int indbrick, spmat BT)
  ind = gf_model_set(model M, 'add nodal contact with rigid obstacle brick',  mesh_im mim, string varname_u, string multname_n[, string multname_t], string dataname_r[, string dataname_friction_coeff], int region, string obstacle[,  int augmented_version])
  ind = gf_model_set(model M, 'add contact with rigid obstacle brick',  mesh_im mim, string varname_u, string multname_n[, string multname_t], string dataname_r[, string dataname_friction_coeff], int region, string obstacle[,  int augmented_version])
  ind = gf_model_set(model M, 'add integral contact with rigid obstacle brick',  mesh_im mim, string varname_u, string multname, string dataname_obstacle, string dataname_r [, string dataname_friction_coeff], int region [, int option [, string dataname_alpha [, string dataname_wt [, string dataname_gamma [, string dataname_vt]]]]])
  ind = gf_model_set(model M, 'add penalized contact with rigid obstacle brick',  mesh_im mim, string varname_u, string dataname_obstacle, string dataname_r [, string dataname_coeff], int region [, int option, string dataname_lambda, [, string dataname_alpha [, string dataname_wt]]])
  ind = gf_model_set(model M, 'add Nitsche contact with rigid obstacle brick', mesh_im mim, string varname, string Neumannterm, string dataname_obstacle, string gamma0name,  int region[, scalar theta[, string dataname_friction_coeff[, string dataname_alpha, string dataname_wt]]])
  ind = gf_model_set(model M, 'add Nitsche midpoint contact with rigid obstacle brick', mesh_im mim, string varname, string Neumannterm, string Neumannterm_wt, string dataname_obstacle, string gamma0name,  int region, scalar theta, string dataname_friction_coeff, string dataname_alpha, string dataname_wt)
  ind = gf_model_set(model M, 'add Nitsche fictitious domain contact brick', mesh_im mim, string varname1, string varname2, string dataname_d1, string dataname_d2, string gamma0name [, scalar theta[, string dataname_friction_coeff[, string dataname_alpha, string dataname_wt1,string dataname_wt2]]])
  ind = gf_model_set(model M, 'add nodal contact between nonmatching meshes brick',  mesh_im mim1[, mesh_im mim2], string varname_u1[, string varname_u2], string multname_n[, string multname_t], string dataname_r[, string dataname_fr], int rg1, int rg2[, int slave1, int slave2,  int augmented_version])
  ind = gf_model_set(model M, 'add nonmatching meshes contact brick',  mesh_im mim1[, mesh_im mim2], string varname_u1[, string varname_u2], string multname_n[, string multname_t], string dataname_r[, string dataname_fr], int rg1, int rg2[, int slave1, int slave2,  int augmented_version])
  ind = gf_model_set(model M, 'add integral contact between nonmatching meshes brick',  mesh_im mim, string varname_u1, string varname_u2, string multname, string dataname_r [, string dataname_friction_coeff], int region1, int region2 [, int option [, string dataname_alpha [, string dataname_wt1 , string dataname_wt2]]])
  ind = gf_model_set(model M, 'add penalized contact between nonmatching meshes brick',  mesh_im mim, string varname_u1, string varname_u2, string dataname_r [, string dataname_coeff], int region1, int region2 [, int option [, string dataname_lambda, [, string dataname_alpha [, string dataname_wt1, string dataname_wt2]]]])
  ind = gf_model_set(model M, 'add integral large sliding contact brick raytracing', string dataname_r, scalar release_distance, [, string dataname_fr[, string dataname_alpha[, int version]]])
  gf_model_set(model M, 'add rigid obstacle to large sliding contact brick', int indbrick, string expr, int N)
  gf_model_set(model M, 'add master contact boundary to large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname[, string wname])
  gf_model_set(model M, 'add slave contact boundary to large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])
  gf_model_set(model M, 'add master slave contact boundary to large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])
  ind = gf_model_set(model M, 'add Nitsche large sliding contact brick raytracing', bool unbiased_version, string dataname_r, scalar release_distance[, string dataname_fr[, string dataname_alpha[, int version]]])
  gf_model_set(model M, 'add rigid obstacle to Nitsche large sliding contact brick', int indbrick, string expr, int N)
  gf_model_set(model M, 'add master contact boundary to biased Nitsche large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname[, string wname])
  gf_model_set(model M, 'add slave contact boundary to biased Nitsche large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])
  gf_model_set(model M, 'add contact boundary to unbiased Nitsche large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])

**Description :**


  Modifies a model object.


**Command list :**



  ``gf_model_set(model M, 'clear')``

    Clear the model.


  ``gf_model_set(model M, 'add fem variable', string name, mesh_fem mf)``

    Add a variable to the model linked to a mesh_fem. <literal>name</literal> is the variable
    name.


  ``gf_model_set(model M, 'add filtered fem variable', string name, mesh_fem mf, int region)``

    Add a variable to the model linked to a mesh_fem. The variable is filtered
    in the sense that only the dof on the region are considered.
    <literal>name</literal> is the variable name.


  ``gf_model_set(model M, 'add im variable', string name, mesh_imd mimd)``

    Add a variable to the model linked to a mesh_imd. <literal>name</literal> is the variable
    name.


  ``gf_model_set(model M, 'add internal im variable', string name, mesh_imd mimd)``

    Add a variable to the model, which is linked to a mesh_imd and will be
    condensed out during the assemblage of the tangent matrix. <literal>name</literal> is
    the variable name.


  ``gf_model_set(model M, 'add variable', string name, sizes)``

    Add a variable to the model of constant sizes. <literal>sizes</literal> is either a
    integer (for a scalar or vector variable) or a vector of dimensions
    for a tensor variable. <literal>name</literal> is the variable name.


  ``gf_model_set(model M, 'delete variable', string name)``

    Delete a variable or a data from the model.


  ``gf_model_set(model M, 'resize variable', string name, sizes)``

    Resize a  constant size variable of the model.  <literal>sizes</literal> is either a
    integer (for a scalar or vector variable) or a vector of dimensions
    for a tensor variable. <literal>name</literal> is the variable name.


  ``gf_model_set(model M, 'add multiplier', string name, mesh_fem mf, string primalname[, mesh_im mim, int region])``

    Add a particular variable linked to a fem being a multiplier with
    respect to a primal variable. The dof will be filtered with the
    <literal></literal>gmm::range_basis<literal></literal> function applied on the terms of the model
    which link the multiplier and the primal variable. This in order to
    retain only linearly independent constraints on the primal variable.
    Optimized for boundary multipliers.


  ``gf_model_set(model M, 'add im data', string name, mesh_imd mimd)``

    Add a data set to the model linked to a mesh_imd. <literal>name</literal> is the data
    name.


  ``gf_model_set(model M, 'add fem data', string name, mesh_fem mf[, sizes])``

    Add a data to the model linked to a mesh_fem. <literal>name</literal> is the data name,
    <literal>sizes</literal> an optional parameter which is either an
    integer  or a vector of suplementary dimensions with respect to <literal>mf</literal>.


  ``gf_model_set(model M, 'add initialized fem data', string name, mesh_fem mf, vec V[, sizes])``

    Add a data to the model linked to a mesh_fem. <literal>name</literal> is the data name.
    The data is initiakized with <literal>V</literal>. The data can be a scalar or vector
    field. <literal>sizes</literal> an optional parameter which is either an
    integer or a vector of suplementary dimensions with respect to <literal>mf</literal>.


  ``gf_model_set(model M, 'add data', string name, int size)``

    Add a fixed size data to the model.  <literal>sizes</literal> is either a
    integer (for a scalar or vector data) or a vector of dimensions
    for a tensor data. <literal>name</literal> is the data name.


  ``gf_model_set(model M, 'add macro', string name, string expr)``

    Define a new macro for the high generic assembly language.
    The name include the parameters. For instance name='sp(a,b)', expr='a.b'
    is a valid definition. Macro without parameter can also be defined.
    For instance name='x1', expr='X[1]' is valid. The form name='grad(u)',
    expr='Grad_u' is also allowed but in that case, the parameter 'u' will
    only be allowed to be a variable name when using the macro. Note that
    macros can be directly defined inside the assembly strings with the
    keyword 'Def'.
    


  ``gf_model_set(model M, 'del macro', string name)``

    Delete a previously defined macro for the high generic assembly language.


  ``gf_model_set(model M, 'add initialized data', string name, vec V[, sizes])``

    Add an initialized fixed size data to the model. <literal>sizes</literal> an
    optional parameter which is either an
    integer  or a vector dimensions that describes the format of the
    data. By default, the data is considered to b a vector field.
    <literal>name</literal> is the data name and <literal>V</literal> is the value of the data.


  ``gf_model_set(model M, 'variable', string name, vec V)``

    Set the value of a variable or data. <literal>name</literal> is the data name.


  ``gf_model_set(model M, 'to variables', vec V[, bool with_internal])``

    Set the value of the variables of the model with the vector <literal>V</literal>.
    Typically, the vector <literal>V</literal> results of the solve of the tangent
    linear system (useful to solve your problem with you own solver).


  ``gf_model_set(model M, 'delete brick', int ind_brick)``

    Delete a variable or a data from the model.


  ``gf_model_set(model M, 'define variable group', string name[, string varname, ...])``

    Defines a group of variables for the interpolation (mainly for the
    raytracing interpolation transformation.


  ``gf_model_set(model M, 'add elementary rotated RT0 projection', string transname)``

    Add the elementary transformation corresponding to the projection
    on rotated RT0 element for two-dimensional elements to the model.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add elementary P0 projection', string transname)``

    Add the elementary transformation corresponding to the projection
    P0 element.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add HHO reconstructed gradient', string transname)``

    Add to the model the elementary transformation corresponding to the
    reconstruction of a gradient for HHO methods.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add HHO reconstructed symmetrized gradient', string transname)``

    Add to the model the elementary transformation corresponding to the
    reconstruction of a symmetrized gradient for HHO methods.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add HHO reconstructed value', string transname)``

    Add to the model the elementary transformation corresponding to the
    reconstruction of the variable for HHO methods.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add HHO reconstructed symmetrized value', string transname)``

    Add to the model the elementary transformation corresponding to the
    reconstruction of the variable for HHO methods using a symmetrized
    gradient.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add HHO stabilization', string transname)``

    Add to the model the elementary transformation corresponding to the
    HHO stabilization operator.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add HHO symmetrized stabilization', string transname)``

    Add to the model the elementary transformation corresponding to the
    HHO stabilization operator using a symmetrized gradient.
    The name is the name given to the elementary transformation.


  ``gf_model_set(model M, 'add interpolate transformation from expression', string transname, mesh source_mesh, mesh target_mesh, string expr)``

    Add a transformation to the model from mesh <literal>source_mesh</literal> to mesh
    <literal>target_mesh</literal> given by the expression <literal>expr</literal> which corresponds to a
    high-level generic assembly expression which may contains some
    variable of the model. CAUTION: the derivative of the
    transformation with used variable is taken into account in the
    computation of the tangen system. However, order two derivative is not
    implemented, so such tranformation is not allowed in the definition
    of a potential.


  ``gf_model_set(model M, 'add element extrapolation transformation', string transname, mesh source_mesh, mat elt_corr)``

    Add a special interpolation transformation which represents the identity
    transformation but allows to evaluate the expression on another element
    than the current element by polynomial extrapolation. It is used for
    stabilization term in fictitious domain applications. the array elt_cor
    should be a two entry array whose first line contains the elements
    concerned by the transformation and the second line the respective
    elements on which the extrapolation has to be made. If an element
    is not listed in elt_cor the evaluation is just made on the current
    element.


  ``gf_model_set(model M, 'add standard secondary domain', string name, mesh_im mim, int region = -1)``

    Add a secondary domain to the model which can be used in a weak-form language expression for integration on the product of two domains. <literal>name</literal> is the name
    of the secondary domain, <literal>mim</literal> is an integration method on this domain
    and <literal>region</literal> the region on which the integration is to be performed.


  ``gf_model_set(model M, 'set element extrapolation correspondence', string transname, mat elt_corr)``

    Change the correspondence map of an element extrapolation interpolate
    transformation.


  ``gf_model_set(model M, 'add raytracing transformation', string transname, scalar release_distance)``

    Add a raytracing interpolate transformation called <literal>transname</literal> to a model
    to be used by the generic assembly bricks.
    CAUTION: For the moment, the derivative of the
    transformation is not taken into account in the model solve.


  ``gf_model_set(model M, 'add master contact boundary to raytracing transformation', string transname, mesh m, string dispname, int region)``

    Add a master contact boundary with corresponding displacement variable
    <literal>dispname</literal> on a specific boundary <literal>region</literal> to an existing raytracing
    interpolate transformation called <literal>transname</literal>.


  ``gf_model_set(model M, 'add slave contact boundary to raytracing transformation', string transname, mesh m, string dispname, int region)``

    Add a slave contact boundary with corresponding displacement variable
    <literal>dispname</literal> on a specific boundary <literal>region</literal> to an existing raytracing
    interpolate transformation called <literal>transname</literal>.


  ``gf_model_set(model M, 'add rigid obstacle to raytracing transformation', string transname, string expr, int N)``

    Add a rigid obstacle whose geometry corresponds to the zero level-set
    of the high-level generic assembly expression <literal>expr</literal>
    to an existing raytracing interpolate transformation called <literal>transname</literal>.


  ``gf_model_set(model M, 'add projection transformation', string transname, scalar release_distance)``

    Add a projection interpolate transformation called <literal>transname</literal> to a model
    to be used by the generic assembly bricks.
    CAUTION: For the moment, the derivative of the
    transformation is not taken into account in the model solve.


  ``gf_model_set(model M, 'add master contact boundary to projection transformation', string transname, mesh m, string dispname, int region)``

    Add a master contact boundary with corresponding displacement variable
    <literal>dispname</literal> on a specific boundary <literal>region</literal> to an existing projection
    interpolate transformation called <literal>transname</literal>.


  ``gf_model_set(model M, 'add slave contact boundary to projection transformation', string transname, mesh m, string dispname, int region)``

    Add a slave contact boundary with corresponding displacement variable
    <literal>dispname</literal> on a specific boundary <literal>region</literal> to an existing projection
    interpolate transformation called <literal>transname</literal>.


  ``gf_model_set(model M, 'add rigid obstacle to projection transformation', string transname, string expr, int N)``

    Add a rigid obstacle whose geometry corresponds to the zero level-set
    of the high-level generic assembly expression <literal>expr</literal>
    to an existing projection interpolate transformation called <literal>transname</literal>.


  ``ind = gf_model_set(model M, 'add linear term', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])``

    Adds a matrix term given by the assembly string <literal>expr</literal> which will
    be assembled in region <literal>region</literal> and with the integration method <literal>mim</literal>.
    Only the matrix term will be taken into account, assuming that it is
    linear.
    The advantage of declaring a term linear instead of nonlinear is that
    it will be assembled only once and no assembly is necessary for the
    residual.
    Take care that if the expression contains some variables and if the
    expression is a potential or of first order (i.e. describe the weak
    form, not the derivative of the weak form), the expression will be
    derivated with respect to all variables.
    You can specify if the term is symmetric, coercive or not.
    If you are not sure, the better is to declare the term not symmetric
    and not coercive. But some solvers (conjugate gradient for instance)
    are not allowed for non-coercive problems.
    <literal>brickname</literal> is an optional name for the brick.


  ``ind = gf_model_set(model M, 'add linear twodomain term', mesh_im mim, string expression, int region, string secondary_domain[, int is_symmetric[, int is_coercive]])``

    Adds a linear term given by a weak form language expression like
    gf_model_set(model M, 'add linear term') but for an integration on a direct
    product of two domains, a first specfied by <literal></literal>mim<literal></literal> and <literal></literal>region<literal></literal>
    and a second one by <literal></literal>secondary_domain<literal></literal> which has to be declared
    first into the model.


  ``ind = gf_model_set(model M, 'add linear generic assembly brick', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])``

    Deprecated. Use gf_model_set(model M, 'add linear term') instead.


  ``ind = gf_model_set(model M, 'add nonlinear term', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])``

    Adds a nonlinear term given by the assembly string <literal>expr</literal> which will
    be assembled in region <literal>region</literal> and with the integration method <literal>mim</literal>.
    The expression can describe a potential or a weak form. Second order
    terms (i.e. containing second order test functions, Test2) are not
    allowed.
    You can specify if the term is symmetric, coercive or not.
    If you are not sure, the better is to declare the term not symmetric
    and not coercive. But some solvers (conjugate gradient for instance)
    are not allowed for non-coercive problems.
    <literal>brickname</literal> is an optional name for the brick.


  ``ind = gf_model_set(model M, 'add nonlinear twodomain term', mesh_im mim, string expression, int region, string secondary_domain[, int is_symmetric[, int is_coercive]])``

    Adds a nonlinear term given by a weak form language expression like
    gf_model_set(model M, 'add nonlinear term') but for an integration on a direct
    product of two domains, a first specfied by <literal></literal>mim<literal></literal> and <literal></literal>region<literal></literal>
    and a second one by <literal></literal>secondary_domain<literal></literal> which has to be declared
    first into the model.


  ``ind = gf_model_set(model M, 'add nonlinear generic assembly brick', mesh_im mim, string expression[, int region[, int is_symmetric[, int is_coercive]]])``

    Deprecated. Use gf_model_set(model M, 'add nonlinear term') instead.


  ``ind = gf_model_set(model M, 'add source term', mesh_im mim, string expression[, int region])``

    Adds a source term given by the assembly string <literal>expr</literal> which will
    be assembled in region <literal>region</literal> and with the integration method <literal>mim</literal>.
    Only the residual term will be taken into account.
    Take care that if the expression contains some variables and if the
    expression is a potential, the expression will be
    derivated with respect to all variables.
    <literal>brickname</literal> is an optional name for the brick.


  ``ind = gf_model_set(model M, 'add twodomain source term', mesh_im mim, string expression, int region, string secondary_domain)``

    Adds a source term given by a weak form language expression like
    gf_model_set(model M, 'add source term') but for an integration on a direct
    product of two domains, a first specfied by <literal></literal>mim<literal></literal> and <literal></literal>region<literal></literal>
    and a second one by <literal></literal>secondary_domain<literal></literal> which has to be declared
    first into the model.


  ``ind = gf_model_set(model M, 'add source term generic assembly brick', mesh_im mim, string expression[, int region])``

    Deprecated. Use gf_model_set(model M, 'add source term') instead.


  ``gf_model_set(model M, 'add assembly assignment', string dataname, string expression[, int region[, int order[, int before]]])``

    Adds expression <literal>expr</literal> to be evaluated at assembly time and being
    assigned to the data <literal>dataname</literal> which has to be of im_data type.
    This allows for instance to store a sub-expression of an assembly
    computation to be used on an other assembly. It can be used for instance
    to store the plastic strain in plasticity models.
    <literal>order</literal> represents the order of assembly where this assignement has to be
    done (potential(0), weak form(1) or tangent system(2) or at each
    order(-1)). The default value is 1.
    If before = 1, the the assignement is perfromed before the computation
    of the other assembly terms, such that the data can be used in the
    remaining of the assembly as an intermediary result (be careful that it is
    still considered as a data, no derivation of the expression is performed
    for the tangent system).
    If before = 0 (default), the assignement is done after the assembly
    terms.


  ``gf_model_set(model M, 'clear assembly assignment')``

    Delete all added assembly assignments


  ``ind = gf_model_set(model M, 'add Laplacian brick', mesh_im mim, string varname[, int region])``

    Add a Laplacian term to the model relatively to the variable <literal>varname</literal>
    (in fact with a minus : <latex style="text"><![CDATA[-\text{div}(\nabla u)]]></latex>).
    If this is a vector valued variable, the Laplacian term is added
    componentwise. <literal>region</literal> is an optional mesh region on which the term
    is added. If it is not specified, it is added on the whole mesh. Return
    the brick index in the model.


  ``ind = gf_model_set(model M, 'add generic elliptic brick', mesh_im mim, string varname, string dataname[, int region])``

    Add a generic elliptic term to the model relatively to the variable <literal>varname</literal>.
    The shape of the elliptic term depends both on the variable and the data.
    This corresponds to a term
    <latex style="text"><![CDATA[-\text{div}(a\nabla u)]]></latex>
    where <latex style="text"><![CDATA[a]]></latex> is the data and <latex style="text"><![CDATA[u]]></latex> the variable. The data can be
    a scalar,
    a matrix or an order four tensor. The variable can be vector valued or
    not. If the data is a scalar or a matrix and the variable is vector
    valued then the term is added componentwise. An order four tensor data
    is allowed for vector valued variable only. The data can be constant or
    describbed on a fem. Of course, when the data is a tensor describe on a
    finite element method (a tensor field) the data can be a huge vector.
    The components of the matrix/tensor have to be stored with the fortran
    order (columnwise) in the data vector (compatibility with blas). The
    symmetry of the given matrix/tensor is not verified (but assumed). If
    this is a vector valued variable, the elliptic term is added
    componentwise. <literal>region</literal> is an optional mesh region on which the term is
    added. If it is not specified, it is added on the whole mesh. Note that
    for the real
    version which uses the high-level generic assembly language, <literal>dataname</literal>
    can be any regular expression of the high-level generic assembly
    language (like "1", "sin(X(1))" or "Norm(u)" for instance) even
    depending on model variables. Return the
    brick index in the model.


  ``ind = gf_model_set(model M, 'add source term brick', mesh_im mim, string varname, string dataexpr[, int region[, string directdataname]])``

    Add a source term to the model relatively to the variable <literal>varname</literal>.
    The source term is
    represented by <literal>dataexpr</literal> which could be any regular expression of the
    high-level generic assembly language (except for the complex version
    where it has to be a declared data of the model).
    <literal>region</literal> is an optional mesh region
    on which the term is added. An additional optional data <literal>directdataname</literal>
    can be provided. The corresponding data vector will be directly added
    to the right hand side without assembly. Note that when region is a
    boundary, this brick allows to prescribe a nonzero Neumann boundary
    condition. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add normal source term brick', mesh_im mim, string varname, string dataname, int region)``

    Add a source term on the variable <literal>varname</literal> on a boundary <literal>region</literal>.
    This region should be a boundary. The source term is
    represented by the data <literal>dataepxpr</literal> which could be any regular
    expression of the high-level generic assembly language (except
    for the complex version where it has to be a declared data of
    the model). A scalar
    product with the outward normal unit vector to the boundary is performed.
    The main aim of this brick is to represent a Neumann condition with a
    vector data without performing the scalar product with the normal as a
    pre-processing. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add Dirichlet condition with simplification', string varname, int region[, string dataname])``

    Adds a (simple) Dirichlet condition on the variable <literal>varname</literal> and
    the mesh region <literal>region</literal>. The Dirichlet condition is prescribed by
    a simple post-treatment of the final linear system (tangent system
    for nonlinear problems) consisting of modifying the lines corresponding
    to the degree of freedom of the variable on <literal>region</literal> (0 outside the
    diagonal, 1 on the diagonal of the matrix and the expected value on
    the right hand side).
    The symmetry of the linear system is kept if all other bricks are
    symmetric.
    This brick is to be reserved for simple Dirichlet conditions (only dof
    declared on the corresponding boundary are prescribed). The application
    of this brick on reduced dof may be problematic. Intrinsic vectorial
    finite element method are not supported.
    <literal>dataname</literal> is the optional right hand side of  the Dirichlet condition.
    It could be constant (but in that case, it can only be applied to
    Lagrange f.e.m.) or (important) described on the same finite
    element method as <literal>varname</literal>.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region[, string dataname])``

    Add a Dirichlet condition on the variable <literal>varname</literal> and the mesh
    region <literal>region</literal>. This region should be a boundary. The Dirichlet
    condition is prescribed with a multiplier variable described by
    <literal>mult_description</literal>. If <literal>mult_description</literal> is a string this is assumed
    to be the variable name corresponding to the multiplier (which should be
    first declared as a multiplier variable on the mesh region in the model).
    If it is a finite element method (mesh_fem object) then a multiplier
    variable will be added to the model and build on this finite element
    method (it will be restricted to the mesh region <literal>region</literal> and eventually
    some conflicting dofs with some other multiplier variables will be
    suppressed). If it is an integer, then a  multiplier variable will be
    added to the model and build on a classical finite element of degree
    that integer. <literal>dataname</literal> is the optional right hand side of  the
    Dirichlet condition. It could be constant or described on a fem; scalar
    or vector valued, depending on the variable on which the Dirichlet
    condition is prescribed. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add Dirichlet condition with Nitsche method', mesh_im mim, string varname, string Neumannterm, string datagamma0, int region[, scalar theta][, string dataname])``

    Add a Dirichlet condition on the variable <literal>varname</literal> and the mesh
    region <literal>region</literal>. This region should be a boundary. <literal>Neumannterm</literal>
    is the expression of the Neumann term (obtained by the Green formula)
    described as an expression of the high-level
    generic assembly language. This term can be obtained by
    gf_model_get(model M, 'Neumann term', varname, region) once all volumic bricks have
    been added to the model. The Dirichlet
    condition is prescribed with Nitsche's method. <literal>datag</literal> is the optional
    right hand side of the Dirichlet condition. <literal>datagamma0</literal> is the
    Nitsche's method parameter. <literal>theta</literal> is a scalar value which can be
    positive or negative. <literal>theta = 1</literal> corresponds to the standard symmetric
    method which is conditionally coercive for  <literal>gamma0</literal> small.
    <literal>theta = -1</literal> corresponds to the skew-symmetric method which is
    inconditionally coercive. <literal>theta = 0</literal> (default) is the simplest method
    for which the second derivative of the Neumann term is not necessary
    even for nonlinear problems. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region[, string dataname, mesh_fem mf_mult])``

    Add a Dirichlet condition on the variable <literal>varname</literal> and the mesh
    region <literal>region</literal>. This region should be a boundary. The Dirichlet
    condition is prescribed with penalization. The penalization coefficient
    is initially <literal>coeff</literal> and will be added to the data of the model.
    <literal>dataname</literal> is the optional right hand side of the Dirichlet condition.
    It could be constant or described on a fem; scalar or vector valued,
    depending on the variable on which the Dirichlet condition is prescribed.
    <literal>mf_mult</literal> is an optional parameter which allows to weaken the
    Dirichlet condition specifying a multiplier space.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add normal Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region[, string dataname])``

    Add a Dirichlet condition to the normal component of the vector
    (or tensor) valued variable <literal>varname</literal> and the mesh
    region <literal>region</literal>. This region should be a boundary. The Dirichlet
    condition is prescribed with a multiplier variable described by
    <literal>mult_description</literal>. If <literal>mult_description</literal> is a string this is assumed
    to be the variable name corresponding to the multiplier (which should be
    first declared as a multiplier variable on the mesh region in the model).
    If it is a finite element method (mesh_fem object) then a multiplier
    variable will be added to the model and build on this finite element
    method (it will be restricted to the mesh region <literal>region</literal> and eventually
    some conflicting dofs with some other multiplier variables will be
    suppressed). If it is an integer, then a  multiplier variable will be
    added to the model and build on a classical finite element of degree
    that integer. <literal>dataname</literal> is the optional right hand side of  the
    Dirichlet condition. It could be constant or described on a fem; scalar
    or vector valued, depending on the variable on which the Dirichlet
    condition is prescribed (scalar if the variable
    is vector valued, vector if the variable is tensor valued).
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add normal Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region[, string dataname, mesh_fem mf_mult])``

    Add a Dirichlet condition to the normal component of the vector
    (or tensor) valued variable <literal>varname</literal> and the mesh
    region <literal>region</literal>. This region should be a boundary. The Dirichlet
    condition is prescribed with penalization. The penalization coefficient
    is initially <literal>coeff</literal> and will be added to the data of the model.
    <literal>dataname</literal> is the optional right hand side of the Dirichlet condition.
    It could be constant or described on a fem; scalar or vector valued,
    depending on the variable on which the Dirichlet condition is prescribed
    (scalar if the variable
    is vector valued, vector if the variable is tensor valued).
    <literal>mf_mult</literal> is an optional parameter which allows to weaken the
    Dirichlet condition specifying a multiplier space.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add normal Dirichlet condition with Nitsche method', mesh_im mim, string varname, string Neumannterm, string gamma0name, int region[, scalar theta][, string dataname])``

    Add a Dirichlet condition to the normal component of the vector
    (or tensor) valued variable <literal>varname</literal> and the mesh region <literal>region</literal>.
    This region should be a boundary. <literal>Neumannterm</literal>
    is the expression of the Neumann term (obtained by the Green formula)
    described as an expression of the high-level
    generic assembly language. This term can be obtained by
    gf_model_get(model M, 'Neumann term', varname, region) once all volumic bricks have
    been added to the model. The Dirichlet
    condition is prescribed with Nitsche's method. <literal>dataname</literal> is the optional
    right hand side of the Dirichlet condition. It could be constant or
    described on a fem. <literal>gamma0name</literal> is the
    Nitsche's method parameter. <literal>theta</literal> is a scalar value which can be
    positive or negative. <literal>theta = 1</literal> corresponds to the standard symmetric
    method which is conditionally coercive for  <literal>gamma0</literal> small.
    <literal>theta = -1</literal> corresponds to the skew-symmetric method which is
    inconditionally coercive. <literal>theta = 0</literal> is the simplest method
    for which the second derivative of the Neumann term is not necessary
    even for nonlinear problems.
    Returns the brick index in the model.
    (This brick is not fully tested)


  ``ind = gf_model_set(model M, 'add generalized Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region, string dataname, string Hname)``

    Add a Dirichlet condition on the variable <literal>varname</literal> and the mesh
    region <literal>region</literal>.  This version is for vector field.
    It prescribes a condition <latex style="text"><![CDATA[Hu = r]]></latex>
    where <literal>H</literal> is a matrix field. The region should be a boundary. The Dirichlet
    condition is prescribed with a multiplier variable described by
    <literal>mult_description</literal>. If <literal>mult_description</literal> is a string this is assumed
    to be the variable name corresponding to the multiplier (which should be
    first declared as a multiplier variable on the mesh region in the model).
    If it is a finite element method (mesh_fem object) then a multiplier
    variable will be added to the model and build on this finite element
    method (it will be restricted to the mesh region <literal>region</literal> and eventually
    some conflicting dofs with some other multiplier variables will be
    suppressed). If it is an integer, then a  multiplier variable will be
    added to the model and build on a classical finite element of degree
    that integer. <literal>dataname</literal> is the right hand side of  the
    Dirichlet condition. It could be constant or described on a fem; scalar
    or vector valued, depending on the variable on which the Dirichlet
    condition is prescribed. <literal>Hname</literal> is the data
    corresponding to the matrix field <literal>H</literal>.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add generalized Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region, string dataname, string Hname[, mesh_fem mf_mult])``

    Add a Dirichlet condition on the variable <literal>varname</literal> and the mesh
    region <literal>region</literal>. This version is for vector field.
    It prescribes a condition <latex style="text"><![CDATA[Hu = r]]></latex>
    where <literal>H</literal> is a matrix field.
    The region should be a boundary. The Dirichlet
    condition is prescribed with penalization. The penalization coefficient
    is intially <literal>coeff</literal> and will be added to the data of the model.
    <literal>dataname</literal> is the right hand side of the Dirichlet condition.
    It could be constant or described on a fem; scalar or vector valued,
    depending on the variable on which the Dirichlet condition is prescribed.
    <literal>Hname</literal> is the data
    corresponding to the matrix field <literal>H</literal>. It has to be a constant matrix
    or described on a scalar fem.
    <literal>mf_mult</literal> is an optional parameter which allows to weaken the
    Dirichlet condition specifying a multiplier space.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add generalized Dirichlet condition with Nitsche method', mesh_im mim, string varname, string Neumannterm, string gamma0name, int region[, scalar theta], string dataname, string Hname)``

    Add a Dirichlet condition on the variable <literal>varname</literal> and the mesh
    region <literal>region</literal>.
    This version is for vector field. It prescribes a condition
    @f$ Hu = r @f$ where <literal>H</literal> is a matrix field.
    CAUTION : the matrix H should have all eigenvalues equal to 1 or 0.
    The region should be a boundary.   <literal>Neumannterm</literal>
    is the expression of the Neumann term (obtained by the Green formula)
    described as an expression of the high-level
    generic assembly language. This term can be obtained by
    gf_model_get(model M, 'Neumann term', varname, region) once all volumic bricks have
    been added to the model.  The Dirichlet
    condition is prescribed with Nitsche's method. <literal>dataname</literal> is the optional
    right hand side of the Dirichlet condition. It could be constant or
    described on a fem. <literal>gamma0name</literal> is the
    Nitsche's method parameter. <literal>theta</literal> is a scalar value which can be
    positive or negative. <literal>theta = 1</literal> corresponds to the standard symmetric
    method which is conditionally coercive for  <literal>gamma0</literal> small.
    <literal>theta = -1</literal> corresponds to the skew-symmetric method which is
    inconditionally coercive. <literal>theta = 0</literal> is the simplest method
    for which the second derivative of the Neumann term is not necessary
    even for nonlinear problems. <literal>Hname</literal> is the data
    corresponding to the matrix field <literal>H</literal>. It has to be a constant matrix
    or described on a scalar fem. Returns the brick index in the model.
    (This brick is not fully tested)


  ``ind = gf_model_set(model M, 'add pointwise constraints with multipliers', string varname, string dataname_pt[, string dataname_unitv] [, string dataname_val])``

    Add some pointwise constraints on the variable <literal>varname</literal> using
    multiplier. The multiplier variable is automatically added to the model.
    The conditions are prescribed on a set of points given in the data
    <literal>dataname_pt</literal> whose dimension is the number of points times the dimension
    of the mesh.
    If the variable represents a vector field, one has to give the data
    <literal>dataname_unitv</literal> which represents a vector of dimension the number of
    points times the dimension of the vector field which should store some
    unit vectors. In that case the prescribed constraint is the scalar
    product of the variable at the corresponding point with the corresponding
    unit vector.
    The optional data <literal>dataname_val</literal> is the vector of values to be prescribed
    at the different points.
    This brick is specifically designed to kill rigid displacement
    in a Neumann problem.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add pointwise constraints with given multipliers', string varname, string multname, string dataname_pt[, string dataname_unitv] [, string dataname_val])``

    Add some pointwise constraints on the variable <literal>varname</literal> using a given
    multiplier <literal>multname</literal>.
    The conditions are prescribed on a set of points given in the data
    <literal>dataname_pt</literal> whose dimension is the number of points times the dimension
    of the mesh.
    The multiplier variable should be a fixed size variable of size the
    number of points.
    If the variable represents a vector field, one has to give the data
    <literal>dataname_unitv</literal> which represents a vector of dimension the number of
    points times the dimension of the vector field which should store some
    unit vectors. In that case the prescribed constraint is the scalar
    product of the variable at the corresponding point with the corresponding
    unit vector.
    The optional data <literal>dataname_val</literal> is the vector of values to be prescribed
    at the different points.
    This brick is specifically designed to kill rigid displacement
    in a Neumann problem.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add pointwise constraints with penalization', string varname, scalar coeff, string dataname_pt[, string dataname_unitv] [, string dataname_val])``

    Add some pointwise constraints on the variable <literal>varname</literal> thanks to
    a penalization. The penalization coefficient is initially
    <literal>penalization_coeff</literal> and will be added to the data of the model.
    The conditions are prescribed on a set of points given in the data
    <literal>dataname_pt</literal> whose dimension is the number of points times the dimension
    of the mesh.
    If the variable represents a vector field, one has to give the data
    <literal>dataname_unitv</literal> which represents a vector of dimension the number of
    points times the dimension of the vector field which should store some
    unit vectors. In that case the prescribed constraint is the scalar
    product of the variable at the corresponding point with the corresponding
    unit vector.
    The optional data <literal>dataname_val</literal> is the vector of values to be prescribed
    at the different points.
    This brick is specifically designed to kill rigid displacement
    in a Neumann problem.
    Returns the brick index in the model.


  ``gf_model_set(model M, 'change penalization coeff', int ind_brick, scalar coeff)``

    Change the penalization coefficient of a Dirichlet condition with
    penalization brick. If the brick is not of this kind, this
    function has an undefined behavior.


  ``ind = gf_model_set(model M, 'add Helmholtz brick', mesh_im mim, string varname, string dataexpr[, int region])``

    Add a Helmholtz term to the model relatively to the variable <literal>varname</literal>.
    <literal>dataexpr</literal> is the wave number. <literal>region</literal> is an optional mesh
    region on which the term is added. If it is not specified, it is added
    on the whole mesh. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add Fourier Robin brick', mesh_im mim, string varname, string dataexpr, int region)``

    Add a Fourier-Robin term to the model relatively to the variable
    <literal>varname</literal>. This corresponds to a weak term of the form
    <latex style="text"><![CDATA[\int (qu).v]]></latex>. <literal>dataexpr</literal> is the parameter <latex style="text"><![CDATA[q]]></latex> of
    the Fourier-Robin condition.  It can be an arbitrary valid expression
    of the high-level generic assembly language (except for the complex version
    for which it should be a data of the model). <literal>region</literal> is the mesh region
    on which the term is added. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add constraint with multipliers', string varname, string multname, spmat B, {vec L | string dataname})``

    Add an additional explicit constraint on the variable <literal>varname</literal> thank to
    a multiplier <literal>multname</literal> peviously added to the model (should be a fixed
    size variable). The constraint is <latex style="text"><![CDATA[BU=L]]></latex>
    with <literal>B</literal> being a rectangular sparse matrix. It is possible to change
    the constraint at any time with the methods gf_model_set(model M, 'set private matrix')
    and gf_model_set(model M, 'set private rhs'). If <literal>dataname</literal> is specified instead of <literal>L</literal>,
    the vector <literal>L</literal> is defined in the model as data with the given name.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add constraint with penalization', string varname, scalar coeff, spmat B, {vec L | string dataname})``

    Add an additional explicit penalized constraint on the variable <literal>varname</literal>.
    The constraint is :math<literal>BU=L</literal> with <literal>B</literal> being a rectangular sparse matrix.
    Be aware that <literal>B</literal> should not contain a plain row, otherwise the whole
    tangent matrix will be plain. It is possible to change the constraint
    at any time with the methods gf_model_set(model M, 'set private matrix')
    and gf_model_set(model M, 'set private rhs'). The method
    gf_model_set(model M, 'change penalization coeff') can be used.
    If <literal>dataname</literal> is specified instead of <literal>L</literal>, the vector <literal>L</literal> is defined
    in the model as data with the given name.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add explicit matrix', string varname1, string varname2, spmat B[, int issymmetric[, int iscoercive]])``

    Add a brick representing an explicit matrix to be added to the tangent
    linear system relatively to the variables <literal>varname1</literal> and <literal>varname2</literal>.
    The given matrix should have has many rows as the dimension of
    <literal>varname1</literal> and as many columns as the dimension of <literal>varname2</literal>.
    If the two variables are different and if <literal>issymmetric</literal> is set to 1
    then the transpose of the matrix is also added to the tangent system
    (default is 0). Set <literal>iscoercive</literal> to 1 if the term does not affect the
    coercivity of the tangent system (default is 0). The matrix can be
    changed by the command gf_model_set(model M, 'set private matrix'). Return the
    brick index in the model.


  ``ind = gf_model_set(model M, 'add explicit rhs', string varname, vec L)``

    Add a brick representing an explicit right hand side to be added to
    the right hand side of the tangent linear system relatively to the
    variable <literal>varname</literal>. The given rhs should have the same size than the
    dimension of <literal>varname</literal>. The rhs can be changed by the command
    gf_model_set(model M, 'set private rhs'). If <literal>dataname</literal> is specified instead of
    <literal>L</literal>, the vector <literal>L</literal> is defined in the model as data with the given name.
    Return the brick index in the model.


  ``gf_model_set(model M, 'set private matrix', int indbrick, spmat B)``

    For some specific bricks having an internal sparse matrix
    (explicit bricks: 'constraint brick' and 'explicit matrix brick'),
    set this matrix.


  ``gf_model_set(model M, 'set private rhs', int indbrick, vec B)``

    For some specific bricks having an internal right hand side vector
    (explicit bricks: 'constraint brick' and 'explicit rhs brick'),
    set this rhs.


  ``ind = gf_model_set(model M, 'add isotropic linearized elasticity brick', mesh_im mim, string varname, string dataname_lambda, string dataname_mu[, int region])``

    Add an isotropic linearized elasticity term to the model relatively to
    the variable <literal>varname</literal>. <literal>dataname_lambda</literal> and <literal>dataname_mu</literal> should
    contain the Lame coefficients. <literal>region</literal> is an optional mesh region
    on which the term is added. If it is not specified, it is added
    on the whole mesh. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add isotropic linearized elasticity pstrain brick', mesh_im mim, string varname, string data_E, string data_nu[, int region])``

    Add an isotropic linearized elasticity term to the model relatively to
    the variable <literal>varname</literal>. <literal>data_E</literal> and <literal>data_nu</literal> should
    contain the Young modulus and Poisson ratio, respectively.
    <literal>region</literal> is an optional mesh region on which the term is added.
    If it is not specified, it is added
    on the whole mesh.
    On two-dimensional meshes, the term will correpsond to a plain strain
    approximation. On three-dimensional meshes, it will correspond to the
    standard model.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add isotropic linearized elasticity pstress brick', mesh_im mim, string varname, string data_E, string data_nu[, int region])``

    Add an isotropic linearized elasticity term to the model relatively to
    the variable <literal>varname</literal>. <literal>data_E</literal> and <literal>data_nu</literal> should
    contain the Young modulus and Poisson ratio, respectively.
    <literal>region</literal> is an optional mesh region on which the term is added.
    If it is not specified, it is added
    on the whole mesh.
    On two-dimensional meshes, the term will correpsond to a plain stress
    approximation. On three-dimensional meshes, it will correspond to the
    standard model.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add linear incompressibility brick', mesh_im mim, string varname, string multname_pressure[, int region[, string dataexpr_coeff]])``

    Add a linear incompressibility condition on <literal>variable</literal>. <literal>multname_pressure</literal>
    is a variable which represent the pressure. Be aware that an inf-sup
    condition between the finite element method describing the pressure and the
    primal variable has to be satisfied. <literal>region</literal> is an optional mesh region on
    which the term is added. If it is not specified, it is added on the whole
    mesh. <literal>dataexpr_coeff</literal> is an optional penalization coefficient for nearly
    incompressible elasticity for instance. In this case, it is the inverse
    of the Lame coefficient <latex style="text"><![CDATA[\lambda]]></latex>. Return the brick index in the
    model.


  ``ind = gf_model_set(model M, 'add nonlinear elasticity brick', mesh_im mim, string varname, string constitutive_law, string dataname[, int region])``

    Add a nonlinear elasticity term to the model relatively to the
    variable <literal>varname</literal> (deprecated brick, use add_finite_strain_elaticity
    instead). <literal>lawname</literal> is the constitutive law which
    could be 'SaintVenant Kirchhoff', 'Mooney Rivlin', 'neo Hookean',
    'Ciarlet Geymonat' or 'generalized Blatz Ko'.
    'Mooney Rivlin' and 'neo Hookean' law names can be preceded with the word
    'compressible' or 'incompressible' to force using the corresponding version.
    The compressible version of these laws requires one additional material
    coefficient. By default, the incompressible version of 'Mooney Rivlin' law
    and the compressible one of the 'neo Hookean' law are considered. In
    general, 'neo Hookean' is a special case of the 'Mooney Rivlin' law that
    requires one coefficient less.
    IMPORTANT : if the variable is defined on a 2D mesh, the plane strain
    approximation is automatically used.
    <literal>dataname</literal> is a vector of parameters for the constitutive law. Its length
    depends on the law. It could be a short vector of constant values or a
    vector field described on a finite element method for variable
    coefficients. <literal>region</literal> is an optional mesh region on which the term
    is added. If it is not specified, it is added on the whole mesh.
    This brick use the low-level generic assembly.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add finite strain elasticity brick', mesh_im mim, string constitutive_law, string varname, string params[, int region])``

    Add a nonlinear elasticity term to the model relatively to the
    variable <literal>varname</literal>. <literal>lawname</literal> is the constitutive law which
    could be 'SaintVenant Kirchhoff', 'Mooney Rivlin', 'Neo Hookean',
    'Ciarlet Geymonat' or 'Generalized Blatz Ko'.
    'Mooney Rivlin' and 'Neo Hookean' law names have to be preceeded with
    the word 'Compressible' or 'Incompressible' to force using the
    corresponding version.
    The compressible version of these laws requires one additional material
    coefficient.
    
    IMPORTANT : if the variable is defined on a 2D mesh, the plane strain
    approximation is automatically used.
    <literal>params</literal> is a vector of parameters for the constitutive law. Its length
    depends on the law. It could be a short vector of constant values or a
    vector field described on a finite element method for variable
    coefficients. <literal>region</literal> is an optional mesh region on which the term
    is added. If it is not specified, it is added on the whole mesh.
    This brick use the high-level generic assembly.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add small strain elastoplasticity brick', mesh_im mim,  string lawname, string unknowns_type [, string varnames, ...] [, string params, ...] [, string theta = '1' [, string dt = 'timestep']] [, int region = -1])``

    Adds a small strain plasticity term to the model <literal>M</literal>. This is the
    main GetFEM brick for small strain plasticity. <literal>lawname</literal> is the name
    of an implemented plastic law, <literal>unknowns_type</literal> indicates the choice
    between a discretization where the plastic multiplier is an unknown of
    the problem or (return mapping approach) just a data of the model
    stored for the next iteration. Remember that in both cases, a multiplier
    is stored anyway. <literal>varnames</literal> is a set of variable and data names with
    length which may depend on the plastic law (at least the displacement,
    the plastic multiplier and the plastic strain). <literal>params</literal> is a list of
    expressions for the parameters (at least elastic coefficients and the
    yield stress). These expressions can be some data names (or even
    variable names) of the model but can also be any scalar valid expression
    of the high level assembly language (such as '1/2', '2+sin(X[0])',
    '1+Norm(v)' ...). The last two parameters optionally provided in
    <literal>params</literal> are the <literal>theta</literal> parameter of the <literal>theta</literal>-scheme (generalized
    trapezoidal rule) used for the plastic strain integration and the
    time-step<literal>dt</literal>. The default value for <literal>theta</literal> if omitted is 1, which
    corresponds to the classical Backward Euler scheme which is first order
    consistent. <literal>theta=1/2</literal> corresponds to the Crank-Nicolson scheme
    (trapezoidal rule) which is second order consistent. Any value
    between 1/2 and 1 should be a valid value. The default value of <literal>dt</literal> is
    'timestep' which simply indicates the time step defined in the model
    (by md.set_time_step(dt)). Alternatively it can be any expression
    (data name, constant value ...). The time step can be altered from one
    iteration to the next one. <literal>region</literal> is a mesh region.
    
    The available plasticity laws are:
    
    - 'Prandtl Reuss' (or 'isotropic perfect plasticity').
      Isotropic elasto-plasticity with no hardening. The variables are the
      displacement, the plastic multiplier and the plastic strain.
      The displacement should be a variable and have a corresponding data
      having the same name preceded by 'Previous\_' corresponding to the
      displacement at the previous time step (typically 'u' and 'Previous_u').
      The plastic multiplier should also have two versions (typically 'xi'
      and 'Previous_xi') the first one being defined as data if
      <literal>unknowns_type </literal> is 'DISPLACEMENT_ONLY' or the integer value 0, or as
      a variable if <literal>unknowns_type</literal> is DISPLACEMENT_AND_PLASTIC_MULTIPLIER
      or the integer value 1.
      The plastic strain should represent a n x n data tensor field stored
      on mesh_fem or (preferably) on an im_data (corresponding to <literal>mim</literal>).
      The data are the first Lame coefficient, the second one (shear modulus)
      and the uniaxial yield stress. A typical call is
      gf_model_get(model M, 'add small strain elastoplasticity brick', mim, 'Prandtl Reuss', 0, 'u', 'xi', 'Previous_Ep', 'lambda', 'mu', 'sigma_y', '1', 'timestep');
      IMPORTANT: Note that this law implements
      the 3D expressions. If it is used in 2D, the expressions are just
      transposed to the 2D. For the plane strain approximation, see below.
    - "plane strain Prandtl Reuss"
      (or "plane strain isotropic perfect plasticity")
      The same law as the previous one but adapted to the plane strain
      approximation. Can only be used in 2D.
    - "Prandtl Reuss linear hardening"
      (or "isotropic plasticity linear hardening").
      Isotropic elasto-plasticity with linear isotropic and kinematic
      hardening. An additional variable compared to "Prandtl Reuss" law:
      the accumulated plastic strain. Similarly to the plastic strain, it
      is only stored at the end of the time step, so a simple data is
      required (preferably on an im_data).
      Two additional parameters: the kinematic hardening modulus and the
      isotropic one. 3D expressions only. A typical call is
      gf_model_get(model M, 'add small strain elastoplasticity brick', mim, 'Prandtl Reuss linear hardening', 0, 'u', 'xi', 'Previous_Ep', 'Previous_alpha', 'lambda', 'mu', 'sigma_y', 'H_k', H_i', '1', 'timestep');
    - "plane strain Prandtl Reuss linear hardening"
      (or "plane strain isotropic plasticity linear hardening").
      The same law as the previous one but adapted to the plane strain
      approximation. Can only be used in 2D.
    
    See GetFEM user documentation for further explanations on the
    discretization of the plastic flow and on the implemented plastic laws.
    See also GetFEM user documentation on time integration strategy
    (integration of transient problems).
    
    IMPORTANT : remember that <literal>small_strain_elastoplasticity_next_iter</literal> has
    to be called at the end of each time step, before the next one
    (and before any post-treatment : this sets the value of the plastic
    strain and plastic multiplier).


  ``ind = gf_model_set(model M, 'add elastoplasticity brick', mesh_im mim ,string projname, string varname, string previous_dep_name, string datalambda, string datamu, string datathreshold, string datasigma[, int region])``

    Old (obsolete) brick which do not use the high level generic
    assembly. Add a nonlinear elastoplastic term to the model relatively
    to the variable <literal>varname</literal>, in small deformations, for an isotropic
    material and for a quasistatic model. <literal>projname</literal> is the type of
    projection that used: only the Von Mises projection is
    available with 'VM' or 'Von Mises'.
    <literal>datasigma</literal> is the variable representing the constraints on the material.
    <literal>previous_dep_name</literal> represents the displacement at the previous time step.
    Moreover, the finite element method on which <literal>varname</literal> is described
    is an K ordered mesh_fem, the <literal>datasigma</literal> one have to be at least
    an K-1 ordered mesh_fem.
    <literal>datalambda</literal> and <literal>datamu</literal> are the Lame coefficients of the studied
    material.
    <literal>datathreshold</literal> is the plasticity threshold of the material.
    The three last variables could be constants or described on the
    same finite element method.
    <literal>region</literal> is an optional mesh region on which the term is added.
    If it is not specified, it is added on the whole mesh.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add finite strain elastoplasticity brick', mesh_im mim , string lawname, string unknowns_type [, string varnames, ...] [, string params, ...] [, int region = -1])``

    Add a finite strain elastoplasticity brick to the model.
    For the moment there is only one supported law defined through
    <literal>lawname</literal> as "Simo_Miehe".
    This law supports to possibilities of unknown variables to solve for
    defined by means of <literal>unknowns_type</literal> set to either
    'DISPLACEMENT_AND_PLASTIC_MULTIPLIER' (integer value 1) or
    'DISPLACEMENT_AND_PLASTIC_MULTIPLIER_AND_PRESSURE' (integer value 3).
    The  "Simo_Miehe" law expects as <literal>varnames</literal> a set of the
    following names that have to be defined as variables in the model:
    
    - the displacement variable which has to be defined as an unknown,
    - the plastic multiplier which has also defined as an unknown,
    - optionally the pressure variable for a mixed displacement-pressure
      formulation for 'DISPLACEMENT_AND_PLASTIC_MULTIPLIER_AND_PRESSURE'
      as <literal>unknowns_type</literal>,
    - the name of a (scalar) fem_data or im_data field that holds the
      plastic strain at the previous time step, and
    - the name of a fem_data or im_data field that holds all
      non-repeated components of the inverse of the plastic right
      Cauchy-Green tensor at the previous time step
      (it has to be a 4 element vector for plane strain 2D problems
      and a 6 element vector for 3D problems).
    
    The  "Simo_Miehe" law also expects as <literal>params</literal> a set of the
    following three parameters:
    
    - an expression for the initial bulk modulus K,
    - an expression for the initial shear modulus G,
    - the name of a user predefined function that decribes
      the yield limit as a function of the hardening variable
      (both the yield limit and the hardening variable values are
      assumed to be Frobenius norms of appropriate stress and strain
      tensors, respectively).
    
    As usual, <literal>region</literal> is an optional mesh region on which the term is added.
    If it is not specified, it is added on the whole mesh.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add nonlinear incompressibility brick', mesh_im mim, string varname, string multname_pressure[, int region])``

    Add a nonlinear incompressibility condition on <literal>variable</literal> (for large
    strain elasticity). <literal>multname_pressure</literal>
    is a variable which represent the pressure. Be aware that an inf-sup
    condition between the finite element method describing the pressure and the
    primal variable has to be satisfied. <literal>region</literal> is an optional mesh region on
    which the term is added. If it is not specified, it is added on the
    whole mesh. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add finite strain incompressibility brick', mesh_im mim, string varname, string multname_pressure[, int region])``

    Add a finite strain incompressibility condition on <literal>variable</literal> (for large
    strain elasticity). <literal>multname_pressure</literal>
    is a variable which represent the pressure. Be aware that an inf-sup
    condition between the finite element method describing the pressure and the
    primal variable has to be satisfied. <literal>region</literal> is an optional mesh region on
    which the term is added. If it is not specified, it is added on the
    whole mesh. Return the brick index in the model.
    This brick is equivalent to the <literal></literal>nonlinear incompressibility brick<literal></literal> but
    uses the high-level generic assembly adding the term
    <literal></literal>p*(1-Det(Id(meshdim)+Grad_u))<literal></literal> if <literal></literal>p<literal></literal> is the multiplier and
    <literal></literal>u<literal></literal> the variable which represent the displacement.


  ``ind = gf_model_set(model M, 'add bilaplacian brick', mesh_im mim, string varname, string dataname [, int region])``

    Add a bilaplacian brick on the variable
    <literal>varname</literal> and on the mesh region <literal>region</literal>.
    This represent a term <latex style="text"><![CDATA[\Delta(D \Delta u)]]></latex>.
    where <latex style="text"><![CDATA[D(x)]]></latex> is a coefficient determined by <literal>dataname</literal> which
    could be constant or described on a f.e.m. The corresponding weak form
    is <latex style="text"><![CDATA[\int D(x)\Delta u(x) \Delta v(x) dx]]></latex>.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add Kirchhoff-Love plate brick', mesh_im mim, string varname, string dataname_D, string dataname_nu [, int region])``

    Add a bilaplacian brick on the variable
    <literal>varname</literal> and on the mesh region <literal>region</literal>.
    This represent a term <latex style="text"><![CDATA[\Delta(D \Delta u)]]></latex> where <latex style="text"><![CDATA[D(x)]]></latex>
    is a the flexion modulus determined by <literal>dataname_D</literal>. The term is
    integrated by part following a Kirchhoff-Love plate model
    with <literal>dataname_nu</literal> the poisson ratio.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add normal derivative source term brick', mesh_im mim, string varname, string dataname, int region)``

    Add a normal derivative source term brick
    <latex style="text"><![CDATA[F = \int b.\partial_n v]]></latex> on the variable <literal>varname</literal> and the
    mesh region <literal>region</literal>.
    
    Update the right hand side of the linear system.
    <literal>dataname</literal> represents <literal>b</literal> and <literal>varname</literal> represents <literal>v</literal>.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add Kirchhoff-Love Neumann term brick', mesh_im mim, string varname, string dataname_M, string dataname_divM, int region)``

    Add a Neumann term brick for Kirchhoff-Love model
    on the variable <literal>varname</literal> and the mesh region <literal>region</literal>.
    <literal>dataname_M</literal> represents the bending moment tensor and  <literal>dataname_divM</literal>
    its divergence.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add normal derivative Dirichlet condition with multipliers', mesh_im mim, string varname, mult_description, int region [, string dataname, int R_must_be_derivated])``

    Add a Dirichlet condition on the normal derivative of the variable
    <literal>varname</literal> and on the mesh region <literal>region</literal> (which should be a boundary).
    The general form is
    <latex style="text"><![CDATA[\int \partial_n u(x)v(x) = \int r(x)v(x) \forall v]]></latex>
    where <latex style="text"><![CDATA[r(x)]]></latex> is
    the right hand side for the Dirichlet condition (0 for
    homogeneous conditions) and <latex style="text"><![CDATA[v]]></latex> is in a space of multipliers
    defined by <literal>mult_description</literal>.
    If <literal>mult_description</literal> is a string this is assumed
    to be the variable name corresponding to the multiplier (which should be
    first declared as a multiplier variable on the mesh region in the model).
    If it is a finite element method (mesh_fem object) then a multiplier
    variable will be added to the model and build on this finite element
    method (it will be restricted to the mesh region <literal>region</literal> and eventually
    some conflicting dofs with some other multiplier variables will be
    suppressed). If it is an integer, then a  multiplier variable will be
    added to the model and build on a classical finite element of degree
    that integer. <literal>dataname</literal> is an optional parameter which represents
    the right hand side of the Dirichlet condition.
    If <literal>R_must_be_derivated</literal> is set to <literal>true</literal> then the normal
    derivative of <literal>dataname</literal> is considered.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add normal derivative Dirichlet condition with penalization', mesh_im mim, string varname, scalar coeff, int region [, string dataname, int R_must_be_derivated])``

    Add a Dirichlet condition on the normal derivative of the variable
    <literal>varname</literal> and on the mesh region <literal>region</literal> (which should be a boundary).
    The general form is
    <latex style="text"><![CDATA[\int \partial_n u(x)v(x) = \int r(x)v(x) \forall v]]></latex>
    where <latex style="text"><![CDATA[r(x)]]></latex> is
    the right hand side for the Dirichlet condition (0 for
    homogeneous conditions).
    The penalization coefficient
    is initially <literal>coeff</literal> and will be added to the data of the model.
    It can be changed with the command gf_model_set(model M, 'change penalization coeff').
    <literal>dataname</literal> is an optional parameter which represents
    the right hand side of the Dirichlet condition.
    If <literal>R_must_be_derivated</literal> is set to <literal>true</literal> then the normal
    derivative of <literal>dataname</literal> is considered.
    Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add Mindlin Reissner plate brick', mesh_im mim, mesh_im mim_reduced, string varname_u3, string varname_theta , string param_E, string param_nu, string param_epsilon, string param_kappa [,int variant [, int region]])``

    Add a term corresponding to the classical Reissner-Mindlin plate
    model for which <literal>varname_u3</literal> is the transverse displacement,
    <literal>varname_theta</literal> the rotation of
    fibers normal to the midplane, 'param_E' the Young Modulus,
    <literal>param_nu</literal> the poisson ratio,
    <literal>param_epsilon</literal> the plate thickness,
    <literal>param_kappa</literal> the shear correction factor. Note that since this brick
    uses the high level generic assembly language, the parameter can
    be regular expression of this language.
    There are three variants.
    <literal>variant = 0</literal> corresponds to the an
    unreduced formulation and in that case only the integration
    method <literal>mim</literal> is used. Practically this variant is not usable since
    it is subject to a strong locking phenomenon.
    <literal>variant = 1</literal> corresponds to a reduced integration where <literal>mim</literal> is
    used for the rotation term and <literal>mim_reduced</literal> for the transverse
    shear term. <literal>variant = 2</literal> (default) corresponds to the projection onto
    a rotated RT0 element of the transverse shear term. For the moment, this
    is adapted to quadrilateral only (because it is not sufficient to
    remove the locking phenomenon on triangle elements). Note also that if
    you use high order elements, the projection on RT0 will reduce the order
    of the approximation.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add enriched Mindlin Reissner plate brick', mesh_im mim, mesh_im mim_reduced1, mesh_im mim_reduced2, string varname_ua, string varname_theta,string varname_u3, string varname_theta3 , string param_E, string param_nu, string param_epsilon [,int variant [, int region]])``

    Add a term corresponding to the enriched Reissner-Mindlin plate
    model for which <literal>varname_ua</literal> is the membrane displacements,
    <literal>varname_u3</literal> is the transverse displacement,
    <literal>varname_theta</literal> the rotation of
    fibers normal to the midplane,
    <literal>varname_theta3</literal> the pinching,
    'param_E' the Young Modulus,
    <literal>param_nu</literal> the poisson ratio,
    <literal>param_epsilon</literal> the plate thickness. Note that since this brick
    uses the high level generic assembly language, the parameter can
    be regular expression of this language.
    There are four variants.
    <literal>variant = 0</literal> corresponds to the an
    unreduced formulation and in that case only the integration
    method <literal>mim</literal> is used. Practically this variant is not usable since
    it is subject to a strong locking phenomenon.
    <literal>variant = 1</literal> corresponds to a reduced integration where <literal>mim</literal> is
    used for the rotation term and <literal>mim_reduced1</literal> for the transverse
    shear term and <literal>mim_reduced2</literal> for the pinching term.
    <literal>variant = 2</literal> (default) corresponds to the projection onto
    a rotated RT0 element of the transverse shear term and a reduced integration for the pinching term.
    For the moment, this is adapted to quadrilateral only (because it is not sufficient to
    remove the locking phenomenon on triangle elements). Note also that if
    you use high order elements, the projection on RT0 will reduce the order
    of the approximation.
    <literal>variant = 3</literal> corresponds to the projection onto
    a rotated RT0 element of the transverse shear term and the projection onto P0 element of the pinching term.
    For the moment, this is adapted to quadrilateral only (because it is not sufficient to
    remove the locking phenomenon on triangle elements). Note also that if
    you use high order elements, the projection on RT0 will reduce the order
    of the approximation.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add mass brick', mesh_im mim, string varname[, string dataexpr_rho[, int region]])``

    Add mass term to the model relatively to the variable <literal>varname</literal>.
    If specified, the data <literal>dataexpr_rho</literal> is the
    density (1 if omitted). <literal>region</literal> is an optional mesh region on
    which the term is added. If it is not specified, it
    is added on the whole mesh. Return the brick index in the model.


  ``ind = gf_model_set(model M, 'add lumped mass for first order brick', mesh_im mim, string varname[, string dataexpr_rho[, int region]])``

    Add lumped mass for first order term to the model relatively to the variable <literal>varname</literal>.
    If specified, the data <literal>dataexpr_rho</literal> is the
    density (1 if omitted). <literal>region</literal> is an optional mesh region on
    which the term is added. If it is not specified, it
    is added on the whole mesh. Return the brick index in the model.


  ``gf_model_set(model M, 'shift variables for time integration')``

    Function used to shift the variables of a model to the data
    corresponding of ther value on the previous time step for time
    integration schemes. For each variable for which a time integration
    scheme has been declared, the scheme is called to perform the shift.
    This function has to be called between two time steps.


  ``gf_model_set(model M, 'perform init time derivative', scalar ddt)``

    By calling this function, indicates that the next solve will compute
    the solution for a (very) small time step <literal>ddt</literal> in order to initalize
    the data corresponding to the derivatives needed by time integration
    schemes (mainly the initial time derivative for order one in time
    problems  and the second order time derivative for second order in time
    problems). The next solve will not change the value of the variables.


  ``gf_model_set(model M, 'set time step', scalar dt)``

    Set the value of the time step to <literal>dt</literal>. This value can be change
    from a step to another for all one-step schemes (i.e. for the moment
    to all proposed time integration schemes).


  ``gf_model_set(model M, 'set time', scalar t)``

    Set the value of the data <literal>t</literal> corresponding to the current time to <literal>t</literal>.


  ``gf_model_set(model M, 'add theta method for first order', string varname, scalar theta)``

    Attach a theta method for the time discretization of the variable
    <literal>varname</literal>. Valid only if there is at most first order time derivative
    of the variable.


  ``gf_model_set(model M, 'add theta method for second order', string varname, scalar theta)``

    Attach a theta method for the time discretization of the variable
    <literal>varname</literal>. Valid only if there is at most second order time derivative
    of the variable.


  ``gf_model_set(model M, 'add Newmark scheme', string varname, scalar beta, scalar gamma)``

    Attach a theta method for the time discretization of the variable
    <literal>varname</literal>. Valid only if there is at most second order time derivative
    of the variable.


  ``gf_model_set(model M, 'add_Houbolt_scheme', string varname)``

    Attach a Houbolt method for the time discretization of the variable
    <literal>varname</literal>. Valid only if there is at most second order time derivative
    of the variable.


  ``gf_model_set(model M, 'disable bricks', ivec bricks_indices)``

    Disable a brick (the brick will no longer participate to the
    building of the tangent linear system).


  ``gf_model_set(model M, 'enable bricks', ivec bricks_indices)``

    Enable a disabled brick.


  ``gf_model_set(model M, 'disable variable', string varname)``

    Disable a variable for a solve (and its attached multipliers).
    The next solve will operate only on
    the remaining variables. This allows to solve separately different
    parts of a model. If there is a strong coupling of the variables,
    a fixed point strategy can the be used.


  ``gf_model_set(model M, 'enable variable', string varname)``

    Enable a disabled variable (and its attached multipliers).


  ``gf_model_set(model M, 'first iter')``

    To be executed before the first iteration of a time integration
    scheme.


  ``gf_model_set(model M, 'next iter')``

    To be executed at the end of each iteration of a time
    integration scheme.


  ``ind = gf_model_set(model M, 'add basic contact brick', string varname_u, string multname_n[, string multname_t], string dataname_r, spmat BN[, spmat BT, string dataname_friction_coeff][, string dataname_gap[, string dataname_alpha[, int augmented_version[, string dataname_gamma, string dataname_wt]]])``

    Add a contact with or without friction brick to the model.
    If U is the vector
    of degrees of freedom on which the unilateral constraint is applied,
    the matrix <literal>BN</literal> have to be such that this constraint is defined by
    <latex style="text"><![CDATA[B_N U \le 0]]></latex>. A friction condition can be considered by adding
    the three parameters <literal>multname_t</literal>, <literal>BT</literal> and <literal>dataname_friction_coeff</literal>.
    In this case, the tangential displacement is <latex style="text"><![CDATA[B_T U]]></latex> and
    the matrix <literal>BT</literal> should have as many rows as <literal>BN</literal> multiplied by
    <latex style="text"><![CDATA[d-1]]></latex> where <latex style="text"><![CDATA[d]]></latex> is the domain dimension.
    In this case also, <literal>dataname_friction_coeff</literal> is a data which represents
    the coefficient of friction. It can be a scalar or a vector representing a
    value on each contact condition.  The unilateral constraint is prescribed
    thank to a multiplier
    <literal>multname_n</literal> whose dimension should be equal to the number of rows of
    <literal>BN</literal>. If a friction condition is added, it is prescribed with a
    multiplier <literal>multname_t</literal> whose dimension should be equal to the number
    of rows of <literal>BT</literal>. The augmentation parameter <literal>r</literal> should be chosen in
    a range of
    acceptabe values (see Getfem user documentation). <literal>dataname_gap</literal> is an
    optional parameter representing the initial gap. It can be a single value
    or a vector of value. <literal>dataname_alpha</literal> is an optional homogenization
    parameter for the augmentation parameter
    (see Getfem user documentation).  The parameter <literal>augmented_version</literal>
    indicates the augmentation strategy : 1 for the non-symmetric
    Alart-Curnier augmented Lagrangian, 2 for the symmetric one (except for
    the coupling between contact and Coulomb friction), 3 for the
    unsymmetric method with augmented multipliers, 4 for the unsymmetric
    method with augmented multipliers and De Saxce projection.


  ``ind = gf_model_set(model M, 'add basic contact brick two deformable bodies', string varname_u1, string varname_u2, string multname_n, string dataname_r, spmat BN1, spmat BN2[, string dataname_gap[, string dataname_alpha[, int augmented_version]]])``

    Add a frictionless contact condition to the model between two deformable
    bodies. If U1, U2 are the vector
    of degrees of freedom on which the unilateral constraint is applied,
    the matrices <literal>BN1</literal> and <literal>BN2</literal> have to be such that this condition
    is defined by
    $B_{N1} U_1 B_{N2} U_2 + \le gap$. The constraint is prescribed thank
    to a multiplier
    <literal>multname_n</literal> whose dimension should be equal to the number of lines of
    <literal>BN</literal>. The augmentation parameter <literal>r</literal> should be chosen in a range of
    acceptabe values (see Getfem user documentation). <literal>dataname_gap</literal> is an
    optional parameter representing the initial gap. It can be a single value
    or a vector of value. <literal>dataname_alpha</literal> is an optional homogenization
    parameter for the augmentation parameter
    (see Getfem user documentation). The parameter <literal>aug_version</literal> indicates
    the augmentation strategy : 1 for the non-symmetric Alart-Curnier
    augmented Lagrangian, 2 for the symmetric one, 3 for the unsymmetric
    method with augmented multiplier.


  ``gf_model_set(model M, 'contact brick set BN', int indbrick, spmat BN)``

    Can be used to set the BN matrix of a basic contact/friction brick.


  ``gf_model_set(model M, 'contact brick set BT', int indbrick, spmat BT)``

    Can be used to set the BT matrix of a basic contact with
    friction brick.


  ``ind = gf_model_set(model M, 'add nodal contact with rigid obstacle brick',  mesh_im mim, string varname_u, string multname_n[, string multname_t], string dataname_r[, string dataname_friction_coeff], int region, string obstacle[,  int augmented_version])``

    Add a contact with or without friction condition with a rigid obstacle
    to the model. The condition is applied on the variable <literal>varname_u</literal>
    on the boundary corresponding to <literal>region</literal>. The rigid obstacle should
    be described with the string <literal>obstacle</literal> being a signed distance to
    the obstacle. This string should be an expression where the coordinates
    are 'x', 'y' in 2D and 'x', 'y', 'z' in 3D. For instance, if the rigid
    obstacle correspond to <latex style="text"><![CDATA[z \le 0]]></latex>, the corresponding signed distance
    will be simply "z". <literal>multname_n</literal> should be a fixed size variable whose size
    is the number of degrees of freedom on boundary <literal>region</literal>. It represents the
    contact equivalent nodal forces. In order to add a friction condition
    one has to add the <literal>multname_t</literal> and <literal>dataname_friction_coeff</literal> parameters.
    <literal>multname_t</literal> should be a fixed size variable whose size is
    the number of degrees of freedom on boundary <literal>region</literal> multiplied by
    <latex style="text"><![CDATA[d-1]]></latex> where <latex style="text"><![CDATA[d]]></latex> is the domain dimension. It represents
    the friction equivalent nodal forces.
    The augmentation parameter <literal>r</literal> should be chosen in a
    range of acceptabe values (close to the Young modulus of the elastic
    body, see GetFEM user documentation).  <literal>dataname_friction_coeff</literal> is
    the friction coefficient. It could be a scalar or a vector of values
    representing the friction coefficient on each contact node.
    The parameter <literal>augmented_version</literal>
    indicates the augmentation strategy : 1 for the non-symmetric
    Alart-Curnier augmented Lagrangian, 2 for the symmetric one (except for
    the coupling between contact and Coulomb friction),
    3 for the new unsymmetric method.
    Basically, this brick compute the matrix BN
    and the vectors gap and alpha and calls the basic contact brick.


  ``ind = gf_model_set(model M, 'add contact with rigid obstacle brick',  mesh_im mim, string varname_u, string multname_n[, string multname_t], string dataname_r[, string dataname_friction_coeff], int region, string obstacle[,  int augmented_version])``

    DEPRECATED FUNCTION. Use 'add nodal contact with rigid obstacle brick' instead.


  ``ind = gf_model_set(model M, 'add integral contact with rigid obstacle brick',  mesh_im mim, string varname_u, string multname, string dataname_obstacle, string dataname_r [, string dataname_friction_coeff], int region [, int option [, string dataname_alpha [, string dataname_wt [, string dataname_gamma [, string dataname_vt]]]]])``

    Add a contact with or without friction condition with a rigid obstacle
    to the model. This brick adds a contact which is defined
    in an integral way. It is the direct approximation of an augmented
    Lagrangian formulation (see Getfem user documentation) defined at the
    continuous level. The advantage is a better scalability: the number of
    Newton iterations should be more or less independent of the mesh size.
    The contact condition is applied on the variable <literal>varname_u</literal>
    on the boundary corresponding to <literal>region</literal>. The rigid obstacle should
    be described with the data <literal>dataname_obstacle</literal> being a signed distance to
    the obstacle (interpolated on a finite element method).
    <literal>multname</literal> should be a fem variable representing the contact stress.
    An inf-sup condition beetween <literal>multname</literal> and <literal>varname_u</literal> is required.
    The augmentation parameter <literal>dataname_r</literal> should be chosen in a
    range of acceptabe values.
    The optional parameter <literal>dataname_friction_coeff</literal> is the friction
    coefficient which could be constant or defined on a finite element method.
    Possible values for <literal>option</literal> is 1 for the non-symmetric Alart-Curnier
    augmented Lagrangian method, 2 for the symmetric one, 3 for the
    non-symmetric Alart-Curnier method with an additional augmentation
    and 4 for a new unsymmetric method. The default value is 1.
    In case of contact with friction, <literal>dataname_alpha</literal> and <literal>dataname_wt</literal>
    are optional parameters to solve evolutionary friction problems.
    <literal>dataname_gamma</literal> and <literal>dataname_vt</literal> represent optional data for adding
    a parameter-dependent sliding velocity to the friction condition.


  ``ind = gf_model_set(model M, 'add penalized contact with rigid obstacle brick',  mesh_im mim, string varname_u, string dataname_obstacle, string dataname_r [, string dataname_coeff], int region [, int option, string dataname_lambda, [, string dataname_alpha [, string dataname_wt]]])``

    Add a penalized contact with or without friction condition with a
    rigid obstacle to the model.
    The condition is applied on the variable <literal>varname_u</literal>
    on the boundary corresponding to <literal>region</literal>. The rigid obstacle should
    be described with the data <literal>dataname_obstacle</literal> being a signed distance to
    the obstacle (interpolated on a finite element method).
    The penalization parameter <literal>dataname_r</literal> should be chosen
    large enough to prescribe approximate non-penetration and friction
    conditions but not too large not to deteriorate too much the
    conditionning of the tangent system.
    <literal>dataname_lambda</literal> is an optional parameter used if option
    is 2. In that case, the penalization term is shifted by lambda (this
    allows the use of an Uzawa algorithm on the corresponding augmented
    Lagrangian formulation)


  ``ind = gf_model_set(model M, 'add Nitsche contact with rigid obstacle brick', mesh_im mim, string varname, string Neumannterm, string dataname_obstacle, string gamma0name,  int region[, scalar theta[, string dataname_friction_coeff[, string dataname_alpha, string dataname_wt]]])``

    Adds a contact condition with or without Coulomb friction on the variable
    <literal>varname</literal> and the mesh boundary <literal>region</literal>. The contact condition
    is prescribed with Nitsche's method. The rigid obstacle should
    be described with the data <literal>dataname_obstacle</literal> being a signed distance to
    the obstacle (interpolated on a finite element method).
    <literal>gamma0name</literal> is the Nitsche's method parameter.
    <literal>theta</literal> is a scalar value which can be
    positive or negative. <literal>theta = 1</literal> corresponds to the standard symmetric
    method which is conditionally coercive for  <literal>gamma0</literal> small.
    <literal>theta = -1</literal> corresponds to the skew-symmetric method which is
    inconditionally coercive. <literal>theta = 0</literal> is the simplest method
    for which the second derivative of the Neumann term is not necessary.
    The optional parameter <literal>dataname_friction_coeff</literal> is the friction
    coefficient which could be constant or defined on a finite element
    method.
    CAUTION: This brick has to be added in the model after all the bricks
    corresponding to partial differential terms having a Neumann term.
    Moreover, This brick can only be applied to bricks declaring their
    Neumann terms. Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add Nitsche midpoint contact with rigid obstacle brick', mesh_im mim, string varname, string Neumannterm, string Neumannterm_wt, string dataname_obstacle, string gamma0name,  int region, scalar theta, string dataname_friction_coeff, string dataname_alpha, string dataname_wt)``

    EXPERIMENTAL BRICK: for midpoint scheme only !!
    Adds a contact condition with or without Coulomb friction on the variable
    <literal>varname</literal> and the mesh boundary <literal>region</literal>. The contact condition
    is prescribed with Nitsche's method. The rigid obstacle should
    be described with the data <literal>dataname_obstacle</literal> being a signed distance to
    the obstacle (interpolated on a finite element method).
    <literal>gamma0name</literal> is the Nitsche's method parameter.
    <literal>theta</literal> is a scalar value which can be
    positive or negative. <literal>theta = 1</literal> corresponds to the standard symmetric
    method which is conditionally coercive for  <literal>gamma0</literal> small.
    <literal>theta = -1</literal> corresponds to the skew-symmetric method which is
    inconditionally coercive. <literal>theta = 0</literal> is the simplest method
    for which the second derivative of the Neumann term is not necessary.
    The optional parameter <literal>dataname_friction_coeff</literal> is the friction
    coefficient which could be constant or defined on a finite element
    method.
    Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add Nitsche fictitious domain contact brick', mesh_im mim, string varname1, string varname2, string dataname_d1, string dataname_d2, string gamma0name [, scalar theta[, string dataname_friction_coeff[, string dataname_alpha, string dataname_wt1,string dataname_wt2]]])``

    Adds a contact condition with or without Coulomb friction between
    two bodies in a fictitious domain. The contact condition is applied on
    the variable <literal>varname_u1</literal> corresponds with the first and slave body
    with Nitsche's method and on the variable <literal>varname_u2</literal> corresponds
    with the second and master body with Nitsche's method.
    The contact condition is evaluated on the fictitious slave boundary.
    The first body should be described by the level-set <literal>dataname_d1</literal>
    and the second body should be described by the level-set <literal>dataname_d2</literal>.
    <literal>gamma0name</literal> is the Nitsche's method parameter.
    <literal>theta</literal> is a scalar value which can be positive or negative.
    <literal>theta = 1</literal> corresponds to the standard symmetric method which is
    conditionally coercive for  <literal>gamma0</literal> small.
    <literal>theta = -1</literal> corresponds to the skew-symmetric method which is inconditionally coercive.
    <literal>theta = 0</literal> is the simplest method for which the second derivative of
    the Neumann term is not necessary. The optional parameter <literal>dataname_friction_coeff</literal>
    is the friction coefficient which could be constant or defined on a finite element method.
    CAUTION: This brick has to be added in the model after all the bricks
    corresponding to partial differential terms having a Neumann term.
    Moreover, This brick can only be applied to bricks declaring their
    Neumann terms. Returns the brick index in the model.


  ``ind = gf_model_set(model M, 'add nodal contact between nonmatching meshes brick',  mesh_im mim1[, mesh_im mim2], string varname_u1[, string varname_u2], string multname_n[, string multname_t], string dataname_r[, string dataname_fr], int rg1, int rg2[, int slave1, int slave2,  int augmented_version])``

    Add a contact with or without friction condition between two faces of
    one or two elastic bodies. The condition is applied on the variable
    <literal>varname_u1</literal> or the variables <literal>varname_u1</literal> and <literal>varname_u2</literal> depending
    if a single or two distinct displacement fields are given. Integers
    <literal>rg1</literal> and <literal>rg2</literal> represent the regions expected to come in contact with
    each other. In the single displacement variable case the regions defined
    in both <literal>rg1</literal> and <literal>rg2</literal> refer to the variable <literal>varname_u1</literal>. In the case
    of two displacement variables, <literal>rg1</literal> refers to <literal>varname_u1</literal> and <literal>rg2</literal>
    refers to <literal>varname_u2</literal>. <literal>multname_n</literal> should be a fixed size variable
    whose size is the number of degrees of freedom on those regions among
    the ones defined in <literal>rg1</literal> and <literal>rg2</literal> which are characterized as "slaves".
    It represents the contact equivalent nodal normal forces. <literal>multname_t</literal>
    should be a fixed size variable whose size corresponds to the size of
    <literal>multname_n</literal> multiplied by qdim - 1 . It represents the contact
    equivalent nodal tangent (frictional) forces. The augmentation parameter
    <literal>r</literal> should be chosen in a range of acceptabe values (close to the Young
    modulus of the elastic body, see Getfem user documentation). The
    friction coefficient stored in the parameter <literal>fr</literal> is either a single
    value or a vector of the same size as <literal>multname_n</literal>. The optional
    parameters <literal>slave1</literal> and <literal>slave2</literal> declare if the regions defined in <literal>rg1</literal>
    and <literal>rg2</literal> are correspondingly considered as "slaves". By default
    <literal>slave1</literal> is true and <literal>slave2</literal> is false, i.e. <literal>rg1</literal> contains the slave
    surfaces, while 'rg2' the master surfaces. Preferrably only one of
    <literal>slave1</literal> and <literal>slave2</literal> is set to true.  The parameter <literal>augmented_version</literal>
    indicates the augmentation strategy : 1 for the non-symmetric
    Alart-Curnier augmented Lagrangian, 2 for the symmetric one (except for
    the coupling between contact and Coulomb friction),
    3 for the new unsymmetric method.
    Basically, this brick computes the matrices BN and BT and the vectors
    gap and alpha and calls the basic contact brick.


  ``ind = gf_model_set(model M, 'add nonmatching meshes contact brick',  mesh_im mim1[, mesh_im mim2], string varname_u1[, string varname_u2], string multname_n[, string multname_t], string dataname_r[, string dataname_fr], int rg1, int rg2[, int slave1, int slave2,  int augmented_version])``

    DEPRECATED FUNCTION. Use 'add nodal contact between nonmatching meshes brick' instead.


  ``ind = gf_model_set(model M, 'add integral contact between nonmatching meshes brick',  mesh_im mim, string varname_u1, string varname_u2, string multname, string dataname_r [, string dataname_friction_coeff], int region1, int region2 [, int option [, string dataname_alpha [, string dataname_wt1 , string dataname_wt2]]])``

    Add a contact with or without friction condition between nonmatching
    meshes to the model. This brick adds a contact which is defined
    in an integral way. It is the direct approximation of an augmented
    agrangian formulation (see Getfem user documentation) defined at the
    continuous level. The advantage should be a better scalability:
    the number of Newton iterations should be more or less independent
    of the mesh size.
    The condition is applied on the variables <literal>varname_u1</literal> and <literal>varname_u2</literal>
    on the boundaries corresponding to <literal>region1</literal> and <literal>region2</literal>.
    <literal>multname</literal> should be a fem variable representing the contact stress
    for the frictionless case and the contact and friction stress for the
    case with friction. An inf-sup condition between <literal>multname</literal> and
    <literal>varname_u1</literal> and <literal>varname_u2</literal> is required.
    The augmentation parameter <literal>dataname_r</literal> should be chosen in a
    range of acceptable values.
    The optional parameter <literal>dataname_friction_coeff</literal> is the friction
    coefficient which could be constant or defined on a finite element
    method on the same mesh as <literal>varname_u1</literal>.
    Possible values for <literal>option</literal> is 1 for the non-symmetric Alart-Curnier
    augmented Lagrangian method, 2 for the symmetric one, 3 for the
    non-symmetric Alart-Curnier method with an additional augmentation
    and 4 for a new unsymmetric method. The default value is 1.
    In case of contact with friction, <literal>dataname_alpha</literal>, <literal>dataname_wt1</literal> and
    <literal>dataname_wt2</literal> are optional parameters to solve evolutionary friction
    problems.


  ``ind = gf_model_set(model M, 'add penalized contact between nonmatching meshes brick',  mesh_im mim, string varname_u1, string varname_u2, string dataname_r [, string dataname_coeff], int region1, int region2 [, int option [, string dataname_lambda, [, string dataname_alpha [, string dataname_wt1, string dataname_wt2]]]])``

    Add a penalized contact condition with or without friction between
    nonmatching meshes to the model.
    The condition is applied on the variables <literal>varname_u1</literal> and  <literal>varname_u2</literal>
    on the boundaries corresponding to <literal>region1</literal> and <literal>region2</literal>.
    The penalization parameter <literal>dataname_r</literal> should be chosen
    large enough to prescribe approximate non-penetration and friction
    conditions but not too large not to deteriorate too much the
    conditionning of the tangent system.
    The optional parameter <literal>dataname_friction_coeff</literal> is the friction
    coefficient which could be constant or defined on a finite element
    method on the same mesh as <literal>varname_u1</literal>.
    <literal>dataname_lambda</literal> is an optional parameter used if option
    is 2. In that case, the penalization term is shifted by lambda (this
    allows the use of an Uzawa algorithm on the corresponding augmented
    Lagrangian formulation)
    In case of contact with friction, <literal>dataname_alpha</literal>, <literal>dataname_wt1</literal> and
    <literal>dataname_wt2</literal> are optional parameters to solve evolutionary friction
    problems.


  ``ind = gf_model_set(model M, 'add integral large sliding contact brick raytracing', string dataname_r, scalar release_distance, [, string dataname_fr[, string dataname_alpha[, int version]]])``

    Adds a large sliding contact with friction brick to the model.
    This brick is able to deal with self-contact, contact between
    several deformable bodies and contact with rigid obstacles.
    It uses the high-level generic assembly. It adds to the model
    a raytracing_interpolate_transformation object.
    For each slave boundary a multiplier variable should be defined.
    The release distance should be determined with care
    (generally a few times a mean element size, and less than the
    thickness of the body). Initially, the brick is added with no contact
    boundaries. The contact boundaries and rigid bodies are added with
    special functions. <literal>version</literal> is 0 (the default value) for the
    non-symmetric version and 1 for the more symmetric one
    (not fully symmetric even without friction).


  ``gf_model_set(model M, 'add rigid obstacle to large sliding contact brick', int indbrick, string expr, int N)``

    Adds a rigid obstacle to an existing large sliding contact
    with friction brick. <literal>expr</literal> is an expression using the high-level
    generic assembly language (where <literal>x</literal> is the current point n the mesh)
    which should be a signed distance to the obstacle.
    <literal>N</literal> is the mesh dimension.


  ``gf_model_set(model M, 'add master contact boundary to large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname[, string wname])``

    Adds a master contact boundary to an existing large sliding contact
    with friction brick.


  ``gf_model_set(model M, 'add slave contact boundary to large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])``

    Adds a slave contact boundary to an existing large sliding contact
    with friction brick.


  ``gf_model_set(model M, 'add master slave contact boundary to large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])``

    Adds a contact boundary to an existing large sliding contact
    with friction brick which is both master and slave
    (allowing the self-contact).


  ``ind = gf_model_set(model M, 'add Nitsche large sliding contact brick raytracing', bool unbiased_version, string dataname_r, scalar release_distance[, string dataname_fr[, string dataname_alpha[, int version]]])``

    Adds a large sliding contact with friction brick to the model based on the Nitsche's method.
    This brick is able to deal with self-contact, contact between
    several deformable bodies and contact with rigid obstacles.
    It uses the high-level generic assembly. It adds to the model
    a raytracing_interpolate_transformation object. "unbiased_version" refers to the version of Nische's method to be used.
    (unbiased or biased one).
    For each slave boundary a  material law should be defined as a function of the dispacement variable on this boundary.
    The release distance should be determined with care
    (generally a few times a mean element size, and less than the
    thickness of the body). Initially, the brick is added with no contact
    boundaries. The contact boundaries and rigid bodies are added with
    special functions. <literal>version</literal> is 0 (the default value) for the
    non-symmetric version and 1 for the more symmetric one
    (not fully symmetric even without friction).


  ``gf_model_set(model M, 'add rigid obstacle to Nitsche large sliding contact brick', int indbrick, string expr, int N)``

    Adds a rigid obstacle to an existing large sliding contact
    with friction brick. <literal>expr</literal> is an expression using the high-level
    generic assembly language (where <literal>x</literal> is the current point n the mesh)
    which should be a signed distance to the obstacle.
    <literal>N</literal> is the mesh dimension.


  ``gf_model_set(model M, 'add master contact boundary to biased Nitsche large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname[, string wname])``

    Adds a master contact boundary to an existing biased Nitsche's large sliding contact
    with friction brick.


  ``gf_model_set(model M, 'add slave contact boundary to biased Nitsche large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])``

    Adds a slave contact boundary to an existing biased Nitsche's large sliding contact
    with friction brick.


  ``gf_model_set(model M, 'add contact boundary to unbiased Nitsche large sliding contact brick', int indbrick, mesh_im mim, int region, string dispname, string lambdaname[, string wname])``

    Adds a contact boundary to an existing unbiased Nitschelarge sliding contact
    with friction brick which is both master and slave.

