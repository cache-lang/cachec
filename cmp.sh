gcc ../cup/src/cup.c -O3 -ggdb3 -o cup
valgrind --leak-check=full ./cup