.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_cont_struct_get
-------------------------------------------

**Synopsis**

::

  h = gf_cont_struct_get(cont_struct CS, 'init step size')
  h = gf_cont_struct_get(cont_struct CS, 'min step size')
  h = gf_cont_struct_get(cont_struct CS, 'max step size')
  h = gf_cont_struct_get(cont_struct CS, 'step size decrement')
  h = gf_cont_struct_get(cont_struct CS, 'step size increment')
  [vec tangent_sol, scalar tangent_par] = gf_cont_struct_get(cont_struct CS, 'compute tangent', vec solution, scalar parameter, vec tangent_sol, scalar tangent_par)
  E = gf_cont_struct_get(cont_struct CS, 'init Moore-Penrose continuation', vec solution, scalar parameter, scalar init_dir)
  E = gf_cont_struct_get(cont_struct CS, 'Moore-Penrose continuation', vec solution, scalar parameter, vec tangent_sol, scalar tangent_par, scalar h)
  t = gf_cont_struct_get(cont_struct CS, 'non-smooth bifurcation test', vec solution1, scalar parameter1, vec tangent_sol1, scalar tangent_par1, vec solution2, scalar parameter2, vec tangent_sol2, scalar tangent_par2)
  t = gf_cont_struct_get(cont_struct CS, 'bifurcation test function')
  {X, gamma, T_X, T_gamma} = gf_cont_struct_get(cont_struct CS, 'sing_data')
  s = gf_cont_struct_get(cont_struct CS, 'char')
  gf_cont_struct_get(cont_struct CS, 'display')

**Description :**


  General function for querying information about cont_struct objects and for
  applying them to numerical continuation.


**Command list :**



  ``h = gf_cont_struct_get(cont_struct CS, 'init step size')``

    Return an initial step size for continuation.


  ``h = gf_cont_struct_get(cont_struct CS, 'min step size')``

    Return the minimum step size for continuation.


  ``h = gf_cont_struct_get(cont_struct CS, 'max step size')``

    Return the maximum step size for continuation.


  ``h = gf_cont_struct_get(cont_struct CS, 'step size decrement')``

    Return the decrement ratio of the step size for continuation.


  ``h = gf_cont_struct_get(cont_struct CS, 'step size increment')``

    Return the increment ratio of the step size for continuation.


  ``[vec tangent_sol, scalar tangent_par] = gf_cont_struct_get(cont_struct CS, 'compute tangent', vec solution, scalar parameter, vec tangent_sol, scalar tangent_par)``

    Compute and return an updated tangent.


  ``E = gf_cont_struct_get(cont_struct CS, 'init Moore-Penrose continuation', vec solution, scalar parameter, scalar init_dir)``

    Initialise the Moore-Penrose continuation: Return a unit tangent to
    the solution curve at the point given by <literal>solution</literal> and <literal>parameter</literal>,
    and an initial step size for the continuation. Orientation of the
    computed tangent with respect to the parameter is determined by the
    sign of <literal>init_dir</literal>.


  ``E = gf_cont_struct_get(cont_struct CS, 'Moore-Penrose continuation', vec solution, scalar parameter, vec tangent_sol, scalar tangent_par, scalar h)``

    Compute one step of the Moore-Penrose continuation: Take the point
    given by <literal>solution</literal> and <literal>parameter</literal>, the tangent given by <literal>tangent_sol</literal>
    and <literal>tangent_par</literal>, and the step size <literal>h</literal>. Return a new point on the
    solution curve, the corresponding tangent, a step size for the next
    step and optionally the current step size. If the returned step
    size equals zero, the continuation has failed. Optionally, return
    the type of any detected singular point.
    NOTE: The new point need not to be saved in the model in the end!


  ``t = gf_cont_struct_get(cont_struct CS, 'non-smooth bifurcation test', vec solution1, scalar parameter1, vec tangent_sol1, scalar tangent_par1, vec solution2, scalar parameter2, vec tangent_sol2, scalar tangent_par2)``

    Test for a non-smooth bifurcation point between the point given by
    <literal>solution1</literal> and <literal>parameter1</literal> with the tangent given by <literal>tangent_sol1</literal>
    and <literal>tangent_par1</literal> and the point given by <literal>solution2</literal> and <literal>parameter2</literal>
    with the tangent given by <literal>tangent_sol2</literal> and <literal>tangent_par2</literal>.


  ``t = gf_cont_struct_get(cont_struct CS, 'bifurcation test function')``

    Return the last value of the bifurcation test function and eventually
    the whole calculated graph when passing between different sub-domains
    of differentiability.


  ``{X, gamma, T_X, T_gamma} = gf_cont_struct_get(cont_struct CS, 'sing_data')``

    Return a singular point (<literal>X</literal>, <literal>gamma</literal>) stored in the cont_struct object and a
    couple of arrays (<literal>T_X</literal>, <literal>T_gamma</literal>) of tangents to all located solution
    branches that emanate from there.


  ``s = gf_cont_struct_get(cont_struct CS, 'char')``

    Output a (unique) string representation of the cont_struct.
    
    This can be used for performing comparisons between two
    different cont_struct objects.
    This function is to be completed.
    


  ``gf_cont_struct_get(cont_struct CS, 'display')``

    Display a short summary for a cont_struct object.
