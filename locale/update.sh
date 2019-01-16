#!/bin/sh
# update transifex pot and local po files

set -ex

# pull po files from transifex
cd `dirname $0`
(
 cd ../getfem;
 bash autogen.sh;
 ./configure;
 cd doc/sphinx;
 sphinx-build -T -b gettext ./source locale;
 cat .tx/config;
 tx push -s --skip
)

rm -R pot ja
tx pull -l ja

