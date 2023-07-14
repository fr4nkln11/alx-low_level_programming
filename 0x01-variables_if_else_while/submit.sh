#!/bin/bash
COMMIT=$1

git add .
git status
git commit -m $COMMIT
git push
