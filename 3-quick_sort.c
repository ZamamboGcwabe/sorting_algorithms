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
 *lomuto_partition - order a subset of an array or ints
 *@size: size of the array
 *@array: array of ints
 *@left: starting index of the subset
 *@right: ending index of subset
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}
	return (above);
}

/**
 *lomuto_sort - implement the quick sort algorithm
 *@array: array of ints
 *@left: start index of array partition
 *@right: end index of array partition
 *@size: size of array
*/
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 *quick_sort - sort an array of ints in ascending order
 *@size: size of array
 *@array: array of ints
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	return;

	lomuto_sort(array, size, 0, size - 1);
}
