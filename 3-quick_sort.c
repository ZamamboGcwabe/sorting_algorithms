#include "sort.h"

/**
 *swap - swaps two ints in an array
 *@m: first int to swap
 *@n: second int to swap
 */
void swap(int *m, int *n)
{
	int tmp = *m;

	*m = *n;
	*n = tmp;
}

/**
 *lomuto_partition - 
