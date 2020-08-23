from distutils.core import setup, Extension
import os

setup (name = 'getfem',
       license='LGPL',
       version = '5.4.1',
       maintainer="Yves Renard",
       maintainer_email="Yves.Renard@insa-lyon.fr",
       description = "This is the getfem-python-interface module",
       ext_modules = [getfemmod])
