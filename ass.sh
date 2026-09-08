#!/bin/bash
echo "present working directory"
pwd
echo "list directory content"
ls
echo "create a folder"
mkdir hello
echo "navigate into hello"
cd hello
echo "create a file"
touch world
echo "populate world"
echo " wealth" >> world 
echo " wealth" >> world
echo " wealth" >> world
echo " wealth" >> world
echo " wealth" >> world
echo " wealth" >> world
echo " wealth" >> world
echo " wealth" >> world
echo " wealth" >> world
echo " wealth" >> world
echo "list the content of world"
cat world
echo "list first three lines of world"
head -3 world
echo "list last three lines of world"
tail -3 world
echo "delect world"
rm -r world 
echo "go back to hello"
cd ..
echo "delect hello"
rmdir hello 

