#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* helper functions */
void print_array(int *array, size_t start, size_t end);


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
