#include "sort.h"

/**
 * swap - swap values
 * @a: value1
 * @b: value2
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * quickSort - split the array and invoke a quick sort recursively
 * @array: array of integers
 * @low: left index
 * @high: right index, ending
 * @size: size of the array
 */
void quickSort(int *array, int low, int high, size_t size)
{
	int pivot; /*partition index*/

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quickSort(array, low, pivot - 1, size); /*Before pivot*/
		quickSort(array, pivot + 1, high, size); /*After pivot*/
	}
}

/**
 * partition - sort the array and swap the values
 * Takes last element as pivot, places
 * the pivot element at its correct position in sorted
 * array, and places all smaller (smaller than pivot)
 * to left of pivot and all greater elements to right
 * of pivot
 * @array: array of integers
 * @low: left index
 * @high: right index, last
 * @size: size of the array
 * Return: partition index
 */
size_t partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = (low - 1); /*Index of smaller element*/

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++; /*increment index of smaller element*/
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of intgers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
	/*Invoke a quick sort indicating the entire array*/
	/*from 0 to the final index*/
}
