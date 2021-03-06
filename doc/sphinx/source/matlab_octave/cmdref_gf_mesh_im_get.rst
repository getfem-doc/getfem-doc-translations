.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_mesh_im_get
-------------------------------------------

**Synopsis**

::

  {I, CV2I} = gf_mesh_im_get(mesh_im MI, 'integ'[, mat CVids])
  CVids = gf_mesh_im_get(mesh_im MI, 'convex_index')
  M = gf_mesh_im_get(mesh_im MI, 'eltm', eltm em, int cv [, int f])
  Ip = gf_mesh_im_get(mesh_im MI, 'im_nodes'[, mat CVids])
  gf_mesh_im_get(mesh_im MI, 'save',string filename[, 'with mesh'])
  gf_mesh_im_get(mesh_im MI, 'char'[,'with mesh'])
  gf_mesh_im_get(mesh_im MI, 'display')
  m = gf_mesh_im_get(mesh_im MI, 'linked mesh')
  z = gf_mesh_im_get(mesh_im MI, 'memsize')

**Description :**


  General function extracting information from mesh_im objects.
  

**Command list :**



  ``{I, CV2I} = gf_mesh_im_get(mesh_im MI, 'integ'[, mat CVids])``

    Return a list of integration methods used by the mesh_im.
    
    `I` is an array of all integ objects found in the convexes
    given in `CVids`. If `CV2I` was supplied as an output argument, it
    contains, for each convex listed in `CVids`, the index of its
    correspounding integration method in `I`.
    
    Convexes which are not part of the mesh, or convexes which do
    not have any integration method have their correspounding entry
    in `CV2I` set to -1.
    
    Example::
    
      cvid=gf_mesh_get(mim,'cvid');
      [f,c2f]=gf_mesh_im_get(mim, 'integ');
      for i=1:size(f), sf{i}=gf_integ_get('char',f(i)); end;
      for i=1:size(c2f),
        disp(sprintf('the integration of convex %d is %s',...
        cvid(i),sf{i}));
      end;
    
    


  ``CVids = gf_mesh_im_get(mesh_im MI, 'convex_index')``

    Return the list of convexes who have a integration method.
    
    Convexes who have the dummy IM_NONE method are not listed.


  ``M = gf_mesh_im_get(mesh_im MI, 'eltm', eltm em, int cv [, int f])``

    Return the elementary matrix (or tensor) integrated on the convex `cv`.
    
    **WARNING**
    
    Be sure that the fem used for the construction of `em` is compatible
    with the fem assigned to element `cv` ! This is not checked by the
    function ! If the argument `f` is given, then the elementary tensor
    is integrated on the face `f` of `cv` instead of the whole convex.


  ``Ip = gf_mesh_im_get(mesh_im MI, 'im_nodes'[, mat CVids])``

    Return the coordinates of the integration points, with their weights.
    
    `CVids` may be a list of convexes, or a list of convex faces, such
    as returned by gf_mesh_get(mesh M, 'region')
    
    **WARNING**
    
    Convexes which are not part of the mesh, or convexes which
    do not have an approximate integration method do not have
    their corresponding entry (this has no meaning for exact
    integration methods!).


  ``gf_mesh_im_get(mesh_im MI, 'save',string filename[, 'with mesh'])``

    Saves a mesh_im in a text file (and optionally its linked mesh object).


  ``gf_mesh_im_get(mesh_im MI, 'char'[,'with mesh'])``

    Output a string description of the mesh_im.
    
    By default, it does not include the description of the linked
    mesh object.


  ``gf_mesh_im_get(mesh_im MI, 'display')``

    displays a short summary for a mesh_im object.


  ``m = gf_mesh_im_get(mesh_im MI, 'linked mesh')``

    Returns a reference to the mesh object linked to `mim`.


  ``z = gf_mesh_im_get(mesh_im MI, 'memsize')``

    Return the amount of memory (in bytes) used by the mesh_im object.
    
    The result does not take into account the linked mesh object.

