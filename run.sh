source=$1

echo "\033[0;33m running g++ ${source} \033[0m\n"

g++ $source && ./a.out