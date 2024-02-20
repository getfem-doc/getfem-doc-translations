.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_model
-------------------------------------------

**Synopsis**

::

  MD = gf_model('real')
  MD = gf_model('complex')

**Description :**


General constructor for model objects.

  model variables store the variables and the state data and the
  description of a model. This includes the global tangent matrix, the right
  hand side and the constraints. There are two kinds of models, the <literal>real</literal>
  and the <literal>complex</literal> models.


**Command list :**



  ``MD = gf_model('real')``

    Build a model for real unknowns.


  ``MD = gf_model('complex')``

    Build a model for complex unknowns.

