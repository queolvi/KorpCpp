find . -name "*.cpp" -o -name "*.h" -print0 | xargs -0 wc -l
find . -name "*.cpp" -print0 | xargs -0 wc -l # для .cpp отдельно
find . -name "*.h" -print0 | xargs -0 wc -l # для .h отдельно

