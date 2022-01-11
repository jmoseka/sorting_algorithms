#include "sort.h"

/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int sorted, temp;

	for (i = 0; i < size; i++)
		/*loop it runs while the array is not sorted.*/
	{
		sorted = 0; /*no item has been swapped*/
		for (j = 0; j < size - 1 - i; j++)
			/*swaps out of order elements during the passthrough*/
		{
			if (array[j] > array[j + 1])/*compare adjacent elements*/
			{
				/* swap elements*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/*set sorted to 1, to indicate at least one swap*/
				sorted = 1;
				print_array(array, size); /*print elements*/
			}
		}
		/*if no swaps are made in the last passthrough, exit*/
		if (!sorted)
			break;
	}
}
