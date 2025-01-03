#!/bin/bash
number=$1

if [ "$number" -lt 0 ]; then
    echo "number must be non-negative"
    exit 1
fi

echo "Multiplication table for ${number}:"
for i in {0..10}; do
    result=$((${number} * ${i}))
    echo "${number} * ${i} = $result"
done
