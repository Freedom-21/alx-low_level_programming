#!/bin/bash

for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -fPIC -c "$file"
done
gcc -shared -o liball.so *.o
rm *.o
