.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_util
-------------------------------------------

**Synopsis**

::

  gf_util('save matrix', string FMT, string FILENAME, mat A)
  A = gf_util('load matrix', string FMT, string FILENAME)
  tl = gf_util('trace level' [, int level])
  tl = gf_util('warning level', int level)

**Description :**


  Performs various operations which do not fit elsewhere.


**Command list :**



  ``gf_util('save matrix', string FMT, string FILENAME, mat A)``

    Exports a sparse matrix into the file named FILENAME, using
    Harwell-Boeing (FMT='hb') or Matrix-Market (FMT='mm') formatting. 


  ``A = gf_util('load matrix', string FMT, string FILENAME)``

    Imports a sparse matrix from a file. 


  ``tl = gf_util('trace level' [, int level])``

    Set the verbosity of some getfem++ routines.
    
    Typically the messages printed by the model bricks, 0 means no
    trace message (default is 3). if no level is given,
    the current trace level is returned. 


  ``tl = gf_util('warning level', int level)``

    Filter the less important warnings displayed by getfem.
    
    0 means no warnings, default level is 3. if no level is given,
    the current warning level is returned. 

