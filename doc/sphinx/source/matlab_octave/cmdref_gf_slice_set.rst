.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_slice_set
-------------------------------------------

**Synopsis**

::

  gf_slice_set(slice S, 'pts', mat P)

**Description :**


  Edition of mesh slices.


**Command list :**



  ``gf_slice_set(slice S, 'pts', mat P)``

    Replace the points of the slice.
    
    The new points `P` are stored in the columns the matrix. Note that
    you can use the function to apply a deformation to a slice, or to
    change the dimension of the slice (the number of rows of `P` is not
    required to be equal to gf_slice_get(slice S, 'dim')).
