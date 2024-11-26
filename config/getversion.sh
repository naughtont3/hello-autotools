#!/bin/bash

# Argument: path to VERSION file
VERSION_FILE=$1

# Get latest version from file (one line file)
if [ -f "$VERSION_FILE" ] ; then
    VERSION=$(cat $VERSION_FILE)
else
    echo "ERROR: File not found '$VERSION_FILE'"
    echo "Usage: $0 FILE"
    exit 1
fi

# Check if we are in a git repo
if [ -x .git*  ] || [ -f .gitignore ] ; then

    # This is a git checkout so git latest SHA
    GITREF=$(git log --oneline | head -1 | awk '{print $1}')

    # Add git SHA to version string
    VERSION="$VERSION-$GITREF"
fi

# Print version to stdout
echo $VERSION

exit 0
