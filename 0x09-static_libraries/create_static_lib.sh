#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -t liball.a
