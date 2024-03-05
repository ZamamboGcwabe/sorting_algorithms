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
 *bubble_sort - sorts an array of integers in ascending order.
 *@size: size of the array
 *@array: array of int to sort
 */
void bubble_sort(int *array, size_t size)
{
	len = size;
	size_t i;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
