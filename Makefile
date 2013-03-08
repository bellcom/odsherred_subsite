# @file
# This file describes the processes required to build the installation profile and prepare it for use.
 
# Default target
all: help

# Builds a release of the the profile
dev:
		drush make --no-core -y --no-gitinfofile --contrib-destination=. --working-copy odsherred_subsite.make

# Build a developer release using authenticated git repositories.
master:
		drush make --no-core -y --no-gitinfofile --contrib-destination=. odsherred_subsite.make

# Tests the build for make file issues.
test:
		drush make --test --no-core -y --no-gitinfofile --contrib-destination=. odsherred_subsite.make

# Cleans up files downloaded through drush make
clean:
		rm -rf modules/contrib
		rm -rf themes/odsherredweb
		rm -rf themes/cmstheme
		rm -rf themes/omega

# Help about build targets.
help:
	@echo "Build targets:"
	@echo " - master : Builds a release build, ready for use."
	@echo " - dev : Builds a developer build with authenticated git repositories."
	@echo " - test : Tests the make file integrity."
	@echo " - clean : Cleans up the downloaded files."
	@echo
	@echo "run: make <target>"

