#!/bin/bash
gcc -c -Werror -Wall -Wextra -std=gnu89 -pedantic *.c
ar -rc liball.a *.o
