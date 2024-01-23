#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to sort
 * @size: Size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int swapped = 1;
	int temp;

	if (array == NULL || size < 2)
		return;

	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < len - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
			i++;
		}
		len--;
	}
}
