#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * and print the array after each time swap two elements
 * @array: array of integers
 * @size: size of array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, sorted;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		sorted = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[sorted])
				sorted = j;
		}
		if (i != sorted)
		{
			temp = array[i];
			array[i] = array[sorted];
			array[sorted] = temp;
			print_array(array, size);
		}
	}
}
