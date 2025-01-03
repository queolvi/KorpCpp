#!/usr/bin/bash 

echo "---------%CPU---------";
ps aux --sort=-%cpu --no-header | head -n 5;
echo "---------%MEM---------"
ps aux --sort=-%mem --no-header | head -n 5
