#!/bin/bash
gcc -c -L. *.c
ar -rcs -L. *.o liball.a

