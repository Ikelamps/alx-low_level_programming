#!/bin/bash
gcc -Wall -pedatic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
