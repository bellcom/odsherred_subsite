# @file
# This file describes the processes required to build the installation profile and prepare it for use.

# Builds a release of the the profile
all:
		drush make --no-core -y --no-gitinfofile --contrib-destination=. --working-copy odsherred_subsite.make

# Build a developer release using authenticated git repositories.
dev:
		drush make --no-core -y --no-gitinfofile --contrib-destination=. odsherred_subsite.make

# Cleans up files downloaded through drush make
clean:
		rm -rf modules/contrib/*
