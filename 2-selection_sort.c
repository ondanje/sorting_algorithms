#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap- function to swap values
 * @a: value 1
 * @b: value 2
 * Return: void
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort- function that implements selection sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing/void
 *
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (!array || !size)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[min_index], &array[i]);
			print_array(array, size);
		}
	}
}
