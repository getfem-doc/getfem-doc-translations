.. Automatically generated file, do not edit it.
.. If some modification are necessary, please modify
.. the corresponding C++ source or the python program extract_doc.

.. include:: ../replaces.txt

gf_workspace
-------------------------------------------

**Synopsis**

::

  gf_workspace('push')
  gf_workspace('pop',  [,i,j, ...])
  gf_workspace('stat')
  gf_workspace('stats')
  gf_workspace('keep', i[,j,k...])
  gf_workspace('keep all')
  gf_workspace('clear')
  gf_workspace('clear all')
  gf_workspace('class name', i)

**Description :**


    Getfem workspace management function. 

    Getfem uses its own workspaces in Matlab, independently of the
    matlab workspaces (this is due to some limitations in the memory
    management of matlab objects). By default, all getfem variables
    belong to the root getfem workspace. A function can create its own
    workspace by invoking gf_workspace('push') at its beginning. When
    exiting, this function MUST invoke gf_workspace('pop') (you can
    use matlab exceptions handling to do this cleanly when the
    function exits on an error).

 

**Command list :**



  ``gf_workspace('push')``

    Create a new temporary workspace on the workspace stack. 


  ``gf_workspace('pop',  [,i,j, ...])``

    Leave the current workspace, destroying all getfem objects
    belonging to it, except the one listed after 'pop', and the ones
    moved to parent workspace by gf_workspace('keep'). 


  ``gf_workspace('stat')``

    Print informations about variables in current workspace. 


  ``gf_workspace('stats')``

    Print informations about all getfem variables. 


  ``gf_workspace('keep', i[,j,k...])``

    prevent the listed variables from being deleted when
    gf_workspace("pop") will be called by moving these variables in the
    parent workspace. 


  ``gf_workspace('keep all')``

    prevent all variables from being deleted when
    gf_workspace("pop") will be called by moving the variables in the
    parent workspace. 


  ``gf_workspace('clear')``

    Clear the current workspace. 


  ``gf_workspace('clear all')``

    Clear every workspace, and returns to the main workspace (you
    should not need this command). 


  ``gf_workspace('class name', i)``

    Return the class name of object i (if I is a mesh handle, it 
    return gfMesh etc..) 

