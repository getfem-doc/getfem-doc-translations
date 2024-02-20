.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_fem
-------------------------------------------

**Synopsis**

::

  F = gf_fem('interpolated_fem', mesh_fem mf_source, mesh_im mim_target, [ivec blocked_dofs[, bool caching]])
  F = gf_fem('projected_fem', mesh_fem mf_source, mesh_im mim_target, int rg_source, int rg_target[, ivec blocked_dofs[, bool caching]])
  F = gf_fem(string fem_name)

**Description :**


General constructor for fem objects.

    This object represents a finite element method on a reference element.


**Command list :**



  ``F = gf_fem('interpolated_fem', mesh_fem mf_source, mesh_im mim_target, [ivec blocked_dofs[, bool caching]])``

    Build a special fem which is interpolated from another mesh_fem.
    
    Using this special finite element, it is possible to interpolate a given
    mesh_fem <literal>mf_source</literal> on another mesh, given the integration method <literal>mim_target</literal>
    that will be used on this mesh.
    
    Note that this finite element may be quite slow or consume much
    memory depending if caching is used or not. By default <literal>caching</literal> is
    True


  ``F = gf_fem('projected_fem', mesh_fem mf_source, mesh_im mim_target, int rg_source, int rg_target[, ivec blocked_dofs[, bool caching]])``

    Build a special fem which is interpolated from another mesh_fem.
    
    Using this special finite element, it is possible to interpolate a given
    mesh_fem <literal>mf_source</literal> on another mesh, given the integration method <literal>mim_target</literal>
    that will be used on this mesh.
    
    Note that this finite element may be quite slow or consume much
    memory depending if caching is used or not. By default <literal>caching</literal> is
    True


  ``F = gf_fem(string fem_name)``

    The <literal>fem_name</literal> should contain a description of the finite element
    method. Please refer to the GetFEM manual (especially the
    description of finite element and integration methods) for a complete
    reference. Here is a list of some of them:
    
    - FEM_PK(n,k) :
      classical Lagrange element Pk on a simplex of dimension <literal>n</literal>.
    - FEM_PK_DISCONTINUOUS(n,k[,alpha]) :
      discontinuous Lagrange element Pk on a simplex of dimension <literal>n</literal>.
    - FEM_QK(n,k) :
      classical Lagrange element Qk on quadrangles, hexahedrons etc.
    - FEM_QK_DISCONTINUOUS(n,k[,alpha]) :
      discontinuous Lagrange element Qk on quadrangles, hexahedrons etc.
    - FEM_Q2_INCOMPLETE(n) :
      incomplete Q2 elements with 8 and 20 dof (serendipity Quad 8 and
      Hexa 20 elements).
    - FEM_PK_PRISM(n,k) :
      classical Lagrange element Pk on a prism of dimension <literal>n</literal>.
    - FEM_PK_PRISM_DISCONTINUOUS(n,k[,alpha]) :
      classical discontinuous Lagrange element Pk on a prism.
    - FEM_PK_WITH_CUBIC_BUBBLE(n,k) :
      classical Lagrange element Pk on a simplex with an additional
      volumic bubble function.
    - FEM_P1_NONCONFORMING :
      non-conforming P1 method on a triangle.
    - FEM_P1_BUBBLE_FACE(n) :
      P1 method on a simplex with an additional bubble function on face 0.
    - FEM_P1_BUBBLE_FACE_LAG :
      P1 method on a simplex with an additional lagrange dof on face 0.
    - FEM_PK_HIERARCHICAL(n,k) :
      PK element with a hierarchical basis.
    - FEM_QK_HIERARCHICAL(n,k) :
      QK element with a hierarchical basis.
    - FEM_PK_PRISM_HIERARCHICAL(n,k) :
      PK element on a prism with a hierarchical basis.
    - FEM_STRUCTURED_COMPOSITE(fem f,k) :
      Composite fem <literal>f</literal> on a grid with <literal>k</literal> divisions.
    - FEM_PK_HIERARCHICAL_COMPOSITE(n,k,s) :
      Pk composite element on a grid with <literal>s</literal> subdivisions and with a
      hierarchical basis.
    - FEM_PK_FULL_HIERARCHICAL_COMPOSITE(n,k,s) :
      Pk composite element with <literal>s</literal> subdivisions and a hierarchical basis
      on both degree and subdivision.
    - FEM_PRODUCT(A,B) :
      tensorial product of two polynomial elements.
    - FEM_HERMITE(n) :
      Hermite element P3 on a simplex of dimension <literal>n = 1, 2, 3</literal>.
    - FEM_ARGYRIS :
      Argyris element P5 on the triangle.
    - FEM_HCT_TRIANGLE :
      Hsieh-Clough-Tocher element on the triangle (composite P3 element
      which is C1), should be used with IM_HCT_COMPOSITE() integration
      method.
    - FEM_QUADC1_COMPOSITE :
      Quadrilateral element, composite P3 element and C1 (16 dof).
    - FEM_REDUCED_QUADC1_COMPOSITE :
      Quadrilateral element, composite P3 element and C1 (12 dof).
    - FEM_RT0(n) :
      Raviart-Thomas element of order 0 on a simplex of dimension <literal>n</literal>.
    - FEM_NEDELEC(n) :
      Nedelec edge element of order 0 on a simplex of dimension <literal>n</literal>.
    
    Of course, you have to ensure that the selected fem is compatible with
    the geometric transformation: a Pk fem has no meaning on a quadrangle.
    
