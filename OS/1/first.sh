#!/bin/bash
a=$1
b=$2
c=$((a + b))

# Запись результатов в файлы
if [ $c -gt 0 ]; then
    echo "Res > 0" >> log.txt
elif [ $c -lt 0 ]; then
    echo "Res < 0" >> log.txt
else
    echo "Res == 0" >> log.txt
fi

echo $c > output.txt

