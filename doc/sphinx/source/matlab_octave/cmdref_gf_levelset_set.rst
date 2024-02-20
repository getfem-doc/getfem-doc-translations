.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_levelset_set
-------------------------------------------

**Synopsis**

::

  gf_levelset_set(levelset LS, 'values', {mat v1|string func_1}[, mat v2|string func_2])
  gf_levelset_set(levelset LS, 'simplify'[, scalar eps=0.01])

**Description :**


  General function for modification of LEVELSET objects.


**Command list :**



  ``gf_levelset_set(levelset LS, 'values', {mat v1|string func_1}[, mat v2|string func_2])``

    Set values of the vector of dof for the level-set functions.
    
    Set the primary function with the vector of dof `v1` (or the expression
    `func_1`) and the secondary function (if any) with  the vector of dof
    `v2` (or the expression `func_2`)


  ``gf_levelset_set(levelset LS, 'simplify'[, scalar eps=0.01])``

    Simplify dof of level-set optionally with the parameter `eps`.

