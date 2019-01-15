#!/bin/sh

set -ex

# setup environment
git checkout master
git submodule init
git submodule update
(cd getfem; git fetch origin; git pull origin master)


# update transifex pot and local po files
sh ./locale/update.sh

# commit po(t) files
git add locale getfem
git commit -m "[skip ci] update po(t) files"

# push changes
git checkout master
git submodule update
git push origin master
