.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_cont_struct
-------------------------------------------

**Synopsis**

::

  S = gf_cont_struct(model md, string dataname_parameter[,string dataname_init, string dataname_final, string dataname_current], scalar sc_fac[, ...])

**Description :**


General constructor for cont_struct objects.

  This object serves for storing parameters and data used in numerical
  continuation of solution branches of models (for more details about
  continuation see the GetFEM user documentation).


**Command list :**



  ``S = gf_cont_struct(model md, string dataname_parameter[,string dataname_init, string dataname_final, string dataname_current], scalar sc_fac[, ...])``

    The variable `dataname_parameter` should parametrise the model given by
    `md`. If the parameterization is done via a vector datum, `dataname_init`
    and `dataname_final` should store two given values of this datum
    determining the parameterization, and `dataname_current` serves for actual
    values of this datum. `sc_fac` is a scale factor involved in the weighted
    norm used in the continuation.
    
    Additional options:
    
    - 'lsolver', string SOLVER_NAME
       name of the solver to be used for the incorporated linear systems
       (the default value is 'auto', which lets getfem choose itself);
       possible values are 'superlu', 'mumps' (if supported), 'cg/ildlt',
       'gmres/ilu' and 'gmres/ilut';
    - 'h_init', scalar HIN
       initial step size (the default value is 1e-2);
    - 'h_max', scalar HMAX
       maximum step size (the default value is 1e-1);
    - 'h_min', scalar HMIN
       minimum step size (the default value is 1e-5);
    - 'h_inc', scalar HINC
       factor for enlarging the step size (the default value is 1.3);
    - 'h_dec', scalar HDEC
       factor for diminishing the step size (the default value is 0.5);
    - 'max_iter', int MIT
       maximum number of iterations allowed in the correction (the default
       value is 10);
    - 'thr_iter', int TIT
       threshold number of iterations of the correction for enlarging the
       step size (the default value is 4);
    - 'max_res', scalar RES
       target residual value of a new point on the solution curve (the
       default value is 1e-6);
    - 'max_diff', scalar DIFF
       determines a convergence criterion for two consecutive points (the
       default value is 1e-6);
    - 'min_cos', scalar MCOS
       minimal value of the cosine of the angle between tangents to the
       solution curve at an old point and a new one (the default value is
       0.9);
    - 'max_res_solve', scalar RES_SOLVE
       target residual value for the linear systems to be solved (the
       default value is 1e-8);
    - 'singularities', int SING
       activates tools for detection and treatment of singular points (1 for
       limit points, 2 for bifurcation points and points requiring special
       branching techniques);
    - 'non-smooth'
       determines that some special methods for non-smooth problems can be
       used;
    - 'delta_max', scalar DMAX
       maximum size of division for evaluating the test function on the
       convex combination of two augmented Jacobians that belong to different
       smooth pieces (the default value is 0.005);
    - 'delta_min', scalar DMIN
       minimum size of division for evaluating the test function on the
       convex combination (the default value is 0.00012);
    - 'thr_var', scalar TVAR
       threshold variation for refining the division (the default value is
       0.02);
    - 'nb_dir', int NDIR
       total number of the linear combinations of one couple of reference
       vectors when searching for new tangent predictions during location of
       new one-sided branches (the default value is 40);
    - 'nb_span', int NSPAN
       total number of the couples of the reference vectors forming the
       linear combinations (the default value is 1);
    - 'noisy' or 'very_noisy'
       determines how detailed information has to be displayed during the
       continuation process (residual values etc.).

