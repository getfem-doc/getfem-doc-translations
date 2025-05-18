.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mumps_context
-------------------------------------------

**Synopsis**

::

  CTX = gf_mumps_context(string sym, string datatype)

**Description :**


General constructor for mumps_context objects.



**Command list :**



  ``CTX = gf_mumps_context(string sym, string datatype)``

    The argument <literal>sym</literal> should be 'symmetric' or 'general symmetric',
    'symmetric positive definite', 'unsymmetric', or empty.
    Default value (empty) is 'unsymmetric' (MUMPS option 0).
    The option 'symmetric' is equivalent to 'general symmetric'
    (MUMPS option 2). The argument <literal>datatype</literal> should be 'real' or
    'complex' or empty. Default value (empty) is 'real'.

