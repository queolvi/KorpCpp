find . -type f -printf "%s %p\n" | sort -n | head -n 1 # Самый маленький файл (размер, путь)
find . -type f -printf "%s %p\n" | sort -nr | head -n 1 # Самый большой файл (размер, путь)

