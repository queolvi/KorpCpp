#!/bin/bash 

if [ $# -eq 0 ]; then
  echo "Error: no file names provided"
  exit 1
fi 

for filename in "$@"; do
  if [ -f "$filename" ]; then
    date >> "$filename"
    echo "Date written in file $filename"
  else
    echo "Error: $filename does not exist"
  fi
done
