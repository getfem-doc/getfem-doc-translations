.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_global_function_get
-------------------------------------------

**Synopsis**

::

  VALs = gf_global_function_get(global_function GF, 'val',mat PTs)
  GRADs = gf_global_function_get(global_function GF, 'grad',mat PTs)
  HESSs = gf_global_function_get(global_function GF, 'hess',mat PTs)
  s = gf_global_function_get(global_function GF, 'char')
  gf_global_function_get(global_function GF, 'display')

**Description :**


  General function for querying information about global_function objects.


**Command list :**



  ``VALs = gf_global_function_get(global_function GF, 'val',mat PTs)``

    Return `val` function evaluation in `PTs` (column points).


  ``GRADs = gf_global_function_get(global_function GF, 'grad',mat PTs)``

    Return `grad` function evaluation in `PTs` (column points).
    
    On return, each column of `GRADs` is of the
    form [Gx,Gy].


  ``HESSs = gf_global_function_get(global_function GF, 'hess',mat PTs)``

    Return `hess` function evaluation in `PTs` (column points).
    
    On return, each column of `HESSs` is of the
    form [Hxx,Hxy,Hyx,Hyy].


  ``s = gf_global_function_get(global_function GF, 'char')``

    Output a (unique) string representation of the global_function.
    
    This can be used to perform comparisons between two
    different global_function objects.
    This function is to be completed.


  ``gf_global_function_get(global_function GF, 'display')``

    displays a short summary for a global_function object.

