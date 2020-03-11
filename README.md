# getfem-doc.org on the Read The Docs.

[![Build Status](https://travis-ci.com/getfem-doc/getfem-doc-translations.svg?branch=master)](https://travis-ci.com/getfem-doc/getfem-doc-translations)
[![Documentation Status](https://readthedocs.org/projects/getfem/badge/?version=latest)](https://getfem.readthedocs.io/en/latest/?badge=latest)
[![License: LGPL v3](https://img.shields.io/badge/License-LGPL%20v3-blue.svg)](https://www.gnu.org/licenses/lgpl-3.0)
[![GitHub issues](https://img.shields.io/github/issues/getfem-doc/getfem-doc-translations.svg?style=flat-square)](https://img.shields.io/github/issues/getfem-doc/getfem-doc-translations?style=flat-square)
![GitHub contributors](https://img.shields.io/github/contributors/getfem-doc/getfem-doc-translations?style=flat-square)

This is a project to provide Getfem official documentation with multiple versions and multiple languages on Read The Docs site.

Current procedure is bit tricky because Read The Docs doesn't have a way to specify options for getfem-build command.
conf.py files for each languages have 'language' and 'locale_dirs' values without having full copy of conf.py of getfem doc. If we want to specify conf.py file that is out of source directory, we will use '-c' option for getfem-build command. Unfortunately Read the Docs can't. If there are any better way, please let me know.

This repository is inspired by [sphinx-doc/sphinx-doc-translations](https://github.com/sphinx-doc/sphinx-doc-translations.git).

## URLs

* RTD project pages for Getfem:

  * https://readthedocs.org/projects/getfem/  (Master)
  * https://readthedocs.org/projects/getfem-ja/
  * https://readthedocs.org/projects/getfem-pt-br/
  * https://readthedocs.org/projects/getfem-es/

* Documentation pages for each languages:

  * http://www.getfem-doc.org/
  * http://www.getfem-doc.org/ja
  * http://www.getfem-doc.org/pt_BR
  * http://www.getfem-doc.org/es

## How to setup a translated documentation project on RTD

Detail is here: https://docs.readthedocs.org/en/latest/localization.html#project-with-multiple-translations

Points are:

* We must have RTD projects for each languages.
* Each projects must have correct Language setting on "Settings" page.
* Master project has connections to each translated projects on "translations settings" page.


## How to update po files

```
sh ./locale/update.sh
```

After that, you should commit updated po files.


## How to add a language

1. add language to locale/update.sh:

   ```
   - rm -R es ja
   - tx pull -l es,ja
   + rm -R es ja pt_BR
   + tx pull -l es,ja,pt_BR
   ```

2. update po files

3. commit them

4. add new project on Read The Docs like:

   https://readthedocs.org/projects/getfem-pt-br/

5. add translation project to parent project like:

   https://readthedocs.org/dashboard/getfem/translations/


## How to add a new version

1. add tag `1.7`

   ```
   git tag 1.7
   ```

2. replace old version `1_7` with `1_8` in:

   - release.sh
   - .travis.yml

3. commit it and push them:

   ```
   git add release.sh .travis.yml
   git commit -m "add new version: 1.8"
   git push --tags
   ```

4. enable version 1.7 on RTD:

   https://readthedocs.org/dashboard/getfem-ja/versions/

