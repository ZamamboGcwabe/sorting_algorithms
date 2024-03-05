#include "sort.h"

/**
 *swap - function that swaps two ints
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
 *selection_sort - sorts an array of integers in ascending order
 *@size: size of array
 *@array: array of the ints
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int *min_index;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min_index = array + 1;
		for (b = 1; b < size; b++)
			min_index = (array[b] < *min_index) ? (array + b) : min_index;

		if ((array + 1) != min_index)
		{
			swap(array + 1, min_index);
			print_array(array, size);
		}
	}
}
