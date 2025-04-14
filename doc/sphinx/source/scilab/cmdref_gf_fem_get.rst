.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_fem_get
-------------------------------------------

**Synopsis**

::

  n = gf_fem_get(fem F, 'nbdof'[, int cv])
  n = gf_fem_get(fem F, 'index of global dof', cv)
  d = gf_fem_get(fem F, 'dim')
  td = gf_fem_get(fem F, 'target_dim')
  P = gf_fem_get(fem F, 'pts'[, int cv])
  b = gf_fem_get(fem F, 'is_equivalent')
  b = gf_fem_get(fem F, 'is_lagrange')
  b = gf_fem_get(fem F, 'is_polynomial')
  d = gf_fem_get(fem F, 'estimated_degree')
  E = gf_fem_get(fem F, 'base_value',mat p)
  ED = gf_fem_get(fem F, 'grad_base_value',mat p)
  EH = gf_fem_get(fem F, 'hess_base_value',mat p)
  gf_fem_get(fem F, 'poly_str')
  string = gf_fem_get(fem F, 'char')
  gf_fem_get(fem F, 'display')

**Description :**


  General function for querying information about FEM objects.


**Command list :**



  ``n = gf_fem_get(fem F, 'nbdof'[, int cv])``

    Return the number of dof for the fem.
    
    Some specific fem (for example 'interpolated_fem') may require a
    convex number <literal>cv</literal> to give their result. In most of the case, you
    can omit this convex number.


  ``n = gf_fem_get(fem F, 'index of global dof', cv)``

    Return the index of global dof for special fems such as interpolated
    fem.


  ``d = gf_fem_get(fem F, 'dim')``

    Return the dimension (dimension of the reference convex) of the fem.


  ``td = gf_fem_get(fem F, 'target_dim')``

    Return the dimension of the target space.
    
    The target space dimension is usually 1, except for vector fem. 


  ``P = gf_fem_get(fem F, 'pts'[, int cv])``

    Get the location of the dof on the reference element.
    
    Some specific fem may require a convex number <literal>cv</literal> to give their
    result (for example 'interpolated_fem'). In most of the case, you
    can omit this convex number.


  ``b = gf_fem_get(fem F, 'is_equivalent')``

    Return 0 if the fem is not equivalent.
    
    Equivalent fem are evaluated on the reference convex. This is
    the case of most classical fem's.


  ``b = gf_fem_get(fem F, 'is_lagrange')``

    Return 0 if the fem is not of Lagrange type.


  ``b = gf_fem_get(fem F, 'is_polynomial')``

    Return 0 if the basis functions are not polynomials.


  ``d = gf_fem_get(fem F, 'estimated_degree')``

    Return an estimation of the polynomial degree of the fem.
    
    This is an estimation for fem which are not polynomials.


  ``E = gf_fem_get(fem F, 'base_value',mat p)``

    Evaluate all basis functions of the FEM at point <literal>p</literal>.
    
    <literal>p</literal> is supposed to be in the reference convex!


  ``ED = gf_fem_get(fem F, 'grad_base_value',mat p)``

    Evaluate the gradient of all base functions of the fem at point <literal>p</literal>.
    
    <literal>p</literal> is supposed to be in the reference convex!


  ``EH = gf_fem_get(fem F, 'hess_base_value',mat p)``

    Evaluate the Hessian of all base functions of the fem at point <literal>p</literal>.
    
    <literal>p</literal> is supposed to be in the reference convex!


  ``gf_fem_get(fem F, 'poly_str')``

    Return the polynomial expressions of its basis functions in
    the reference convex.
    The result is expressed as a cell array of
    strings. Of course this will fail on non-polynomial fem's. 


  ``string = gf_fem_get(fem F, 'char')``

    Ouput a (unique) string representation of the fem.
    
    This can be used to perform comparisons between two different fem
    objects.


  ``gf_fem_get(fem F, 'display')``

    displays a short summary for a fem object.

