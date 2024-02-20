.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_precond_get
-------------------------------------------

**Synopsis**

::

  gf_precond_get(precond P, 'mult', vec V)
  gf_precond_get(precond P, 'tmult', vec V)
  gf_precond_get(precond P, 'type')
  gf_precond_get(precond P, 'size')
  gf_precond_get(precond P, 'is_complex')
  s = gf_precond_get(precond P, 'char')
  gf_precond_get(precond P, 'display')

**Description :**


  General function for querying information about precond objects.


**Command list :**



  ``gf_precond_get(precond P, 'mult', vec V)``

    Apply the preconditioner to the supplied vector.


  ``gf_precond_get(precond P, 'tmult', vec V)``

    Apply the transposed preconditioner to the supplied vector.


  ``gf_precond_get(precond P, 'type')``

    Return a string describing the type of the preconditioner ('ilu', 'ildlt',..).


  ``gf_precond_get(precond P, 'size')``

    Return the dimensions of the preconditioner.


  ``gf_precond_get(precond P, 'is_complex')``

    Return 1 if the preconditioner stores complex values.


  ``s = gf_precond_get(precond P, 'char')``

    Output a (unique) string representation of the precond.
    
    This can be used to perform comparisons between two
    different precond objects.
    This function is to be completed.
    


  ``gf_precond_get(precond P, 'display')``

    displays a short summary for a precond object.
