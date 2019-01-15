#!/bin/sh
# update transifex pot and local po files

set -ex

# required environment variables
SPHINXINTL_TRANSIFEX_PROJECT_NAME=getfem-53-1
# pull po files from transifex
cd `dirname $0`
sphinx-build -b gettext -D language=en ../getfem/doc/sphinx/source pot
sphinx-intl update -p pot -d . -l ja
cat .tx/config
tx push -s --skip
rm -R ja
tx pull -l ja
git checkout .tx/config

