.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_global_function
-------------------------------------------

**Synopsis**

::

  GF = gf_global_function('cutoff', int fn, scalar r, scalar r1, scalar r0)
  GF = gf_global_function('crack', int fn)
  GF = gf_global_function('parser', string val[, string grad[, string hess]])
  GF = gf_global_function('product', global_function F, global_function G)
  GF = gf_global_function('add', global_function gf1, global_function gf2)

**Description :**


General constructor for global_function objects.

  Global function object is represented by three functions:

   * The function <literal>val</literal>.
   * The function gradient <literal>grad</literal>.
   * The function Hessian <literal>hess</literal>.

  this type of function is used as local and global enrichment function. The
  global function Hessian is an optional parameter (only for fourth order
  derivative problems). 

**Command list :**



  ``GF = gf_global_function('cutoff', int fn, scalar r, scalar r1, scalar r0)``

    Create a cutoff global function.


  ``GF = gf_global_function('crack', int fn)``

    Create a near-tip asymptotic global function for modelling cracks.


  ``GF = gf_global_function('parser', string val[, string grad[, string hess]])``

    Create a global function from strings <literal>val</literal>, <literal>grad</literal> and <literal>hess</literal>.
    This function could be improved by using the derivation of the generic
    assembly language ... to be done. 


  ``GF = gf_global_function('product', global_function F, global_function G)``

    Create a product of two global functions.


  ``GF = gf_global_function('add', global_function gf1, global_function gf2)``

    Create a add of two global functions.
