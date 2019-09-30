#!/bin/sh
# update transifex pot and local po files

set -ex

# required environment variables
# SPHINXINTL_TRANSIFEX_USERNAME=tkoyama010
# SPHINXINTL_TRANSIFEX_PROJECT_NAME=getfem


# pull po files from transifex
cd `dirname $0`
sphinx-intl create-transifexrc
#rm -R pot  # skip this line cause "already unused pot files will not removed" but we must keep these files to avoid commit for only "POT-Creation-Time" line updated. see: https://github.com/sphinx-doc/sphinx/issues/3443
sphinx-build -T -b gettext ../doc/sphinx/source pot
sphinx-intl update-txconfig-resources -p pot -d .
cat .tx/config
tx push -s --skip
rm -Rf ja
tx pull -l ja
git checkout .tx/config

