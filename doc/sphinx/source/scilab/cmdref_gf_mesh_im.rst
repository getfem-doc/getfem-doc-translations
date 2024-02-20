.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_im
-------------------------------------------

**Synopsis**

::

  MIM = gf_mesh_im('load', string fname[, mesh m])
  MIM = gf_mesh_im('from string', string s[, mesh m])
  MIM = gf_mesh_im('clone', mesh_im mim)
  MIM = gf_mesh_im('levelset', mesh_levelset mls, string where, integ im[, integ im_tip[, integ im_set]])
  MIM = gf_mesh_im(mesh m, [{integ im|int im_degree}])

**Description :**


General constructor for mesh_im objects.

  This object represents an integration method defined on a whole mesh (an 
  potentially on its boundaries).


**Command list :**



  ``MIM = gf_mesh_im('load', string fname[, mesh m])``

    Load a mesh_im from a file.
    
    If the mesh <literal>m</literal> is not supplied (this kind of file does not store the
    mesh), then it is read from the file and its descriptor is returned as
    the second output argument.


  ``MIM = gf_mesh_im('from string', string s[, mesh m])``

    Create a mesh_im object from its string description.
    
    See also <literal></literal>gf_mesh_im_get(mesh_im MI, 'char')<literal></literal>


  ``MIM = gf_mesh_im('clone', mesh_im mim)``

    Create a copy of a mesh_im.


  ``MIM = gf_mesh_im('levelset', mesh_levelset mls, string where, integ im[, integ im_tip[, integ im_set]])``

    Build an integration method conformal to a partition defined
    implicitly by a levelset.
    
    The <literal>where</literal> argument define the domain of integration with respect to
    the levelset, it has to be chosen among 'ALL', 'INSIDE', 'OUTSIDE' and
    'BOUNDARY'.
    
    it can be completed by a string defining the boolean operation
    to define the integration domain when there is more than one levelset.
    
    the syntax is very simple, for example if there are 3 different
    levelset,
     
     "a*b*c" is the intersection of the domains defined by each
     levelset (this is the default behaviour if this function is not
     called).
    
     "a+b+c" is the union of their domains.
    
     "c-(a+b)" is the domain of the third levelset minus the union of
     the domains of the two others.
     
     "!a" is the complementary of the domain of a (i.e. it is the
     domain where a(x)>0)
    
     The first levelset is always referred to with "a", the second
     with "b", and so on.
    
    for intance INSIDE(a*b*c)
    
    CAUTION: this integration method will be defined only on the element
    cut by the level-set. For the 'ALL', 'INSIDE' and 'OUTSIDE' options
    it is mandatory to use the method <literal></literal>gf_mesh_im_set(mesh_im MI, 'integ')<literal></literal> to define
    the integration method on the remaining elements.
    


  ``MIM = gf_mesh_im(mesh m, [{integ im|int im_degree}])``

    Build a new mesh_im object.
    
    For convenience, optional arguments (<literal>im</literal> or <literal>im_degree</literal>) can be
    provided, in that case a call to <literal></literal>gf_mesh_im_get(mesh_im MI, 'integ')<literal></literal> is issued
    with these arguments.

