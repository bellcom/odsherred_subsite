#!/bin/bash

##### Drupal deploy script made in shell
# - Makes build with drush make
# - Moves latest build to dev-latest
# - Backup database
# - Update database with drush updb
# - Clear cache
#
# ## Multisite?
# Run the script with URI infront:
# URI=http://domain.tld ./reroll.sh
#
# Author: Anders Bryrup (andersbryrup@gmail.com)

DATE=`date +%Y%m%d%H%M`

# The newly builed dir
BUILD_DIR=master-$DATE
# The previous build dir
BUILD_DIR_PREV=master-previous
# The build dir with latest build
BUILD_DIR_LATEST=master-latest

# The Source Profile name
# This is a special case, where multiple profiles are in same dir.
# [name].install
# [name].profile
# [name].info
PROFILE_SRC=odsherred_subsite
# The destination Profile name
PROFILE_DST=odsherred_subsite

# The root dir of your drupal instance. Used by drush!
DRUPAL_ROOT=$(dirname `pwd`)/public_html

mkdir -p build/$BUILD_DIR

drush make --no-gitinfofile -y --no-core --working-copy --contrib-destination=build/$BUILD_DIR $PROFILE_SRC.make

### Code below can be in seperate file. source execute file from here. ###
# . ./deploy.sh

if [ -d "build/$BUILD_DIR/modules" ]; then
	# Drush make completed without errors. If modules doesnt exist, drush make failed.

    
    # Copy modules into build
    cp -r modules/* build/$BUILD_DIR/modules/

    # Copy themes into build
    cp -r themes/* build/$BUILD_DIR/themes

    # Copy libraries
    cp -r libraries/* build/$BUILD_DIR/libraries

	# Lets copy our drupal profile files
	cp $PROFILE_SRC.info build/$BUILD_DIR/$PROFILE_DST.info
	cp $PROFILE_SRC.profile build/$BUILD_DIR/$PROFILE_DST.profile
	cp $PROFILE_SRC.install build/$BUILD_DIR/$PROFILE_DST.install

	# Move old build to previous
	unlink build/$BUILD_DIR_PREV
	mv build/$BUILD_DIR_LATEST build/$BUILD_DIR_PREV
	# Make new build the latest
	ln -sf $BUILD_DIR build/$BUILD_DIR_LATEST

	# Drush stuff for the sites, do this in a subshell
	(
	cd $DRUPAL_ROOT 
    echo "Updating database... Site will go in maintenance mode!"
	mdrush.sh "vset maintenance_mode 1"
	mdrush.sh "vset updb"


	# Finnally clear the cache
	echo "Clearing cache..."
	mdrush.sh "cc registry"
	mdrush.sh "cc all"
	mdrush.sh "vset maintenance_mode 0"
    )

	echo "Deploy Complete. End of maintenance mode!"

	# Cleanup old builds.
	echo "Deleting old build dirs..."
	. ./cleanup.sh
else
	# Build failed, remove build
	rm -rf build/$BUILD_DIR
	echo "Build Failed. Deploy terminated"
fi
