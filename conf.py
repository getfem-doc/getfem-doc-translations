# basedir is set by <lang>/conf.py
"""
Use "-D language=<LANG>" option to build a localized pyvista document.
For example::

    sphinx-build -D language=ja -b html . _build/html

This conf.py do:

- Specify `locale_dirs` and `gettext_compact`.
- Overrides source directory as 'getfem/docs`.

"""
import os
import sys
from sphinx.util.pycompat import execfile_
import shutil

sys.path.append(os.path.join(os.path.dirname(__file__), "./interface/src/python"))

execfile_(os.path.join(basedir, "conf.py"), globals())

autodoc_mock_imports = ["getfem"]

basedir = os.path.join(os.path.dirname(os.path.abspath(__file__)), "./doc/sphinx/source")
locale_dirs = [os.path.join(basedir, "../../locale/")]
html_static_path = [os.path.join(basedir, "./doc/sphinx/source/.static")]
templates_path = [os.path.join(basedir, "./doc/sphinx/source/.templates")]
