.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_levelset
-------------------------------------------

**Synopsis**

::

  LS = gf_levelset(mesh m, int d[, string 'ws'| string f1[, string f2 | string 'ws']])

**Description :**


General constructor for levelset objects.


   The level-set object is represented by a primary level-set and optionally
   a secondary level-set used to represent fractures (if p(x) is the primary
   level-set function and s(x) is the secondary level-set, the crack is
   defined by <latex style="text"><![CDATA[p(x)=0]]></latex> and <latex style="text"><![CDATA[s(x)\leq0]]></latex> : the role of the secondary is to determine
   the crack front/tip).

   note:

      All tools listed below need the package qhull installed on your
      system. This package is widely available. It computes convex hull and
      delaunay triangulations in arbitrary dimension.



**Command list :**



  ``LS = gf_levelset(mesh m, int d[, string 'ws'| string f1[, string f2 | string 'ws']])``

    Create a levelset object on a mesh represented by a primary function
    (and optional secondary function, both) defined on a lagrange mesh_fem of
    degree <literal>d</literal>.
    
    If <literal>ws</literal> (with secondary) is set; this levelset is represented by a
    primary function and a secondary function. If <literal>f1</literal> is set; the primary
    function is defined by that expression (with the syntax of the high
    generic assembly language). If <literal>f2</literal> is set; this levelset
    is represented by a primary function and a secondary function defined
    by these expressions. 

