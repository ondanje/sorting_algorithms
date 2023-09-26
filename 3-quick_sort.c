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
 * lomuto_partition- function to partition/ pick pivot
 * @array: array
 * @low: low
 * @high: high
 * Return: returns an integer
 *
*/
int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);

		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * quick_sort- function toimplement quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void /Nothing
*/
void quick_sort(int *array, size_t size)
{
	int pivot;

	if (!array || !size)
	{
		return;
	}

	pivot = lomuto_partition(array, 0, size - 1);

	quick_sort(array, pivot);
	quick_sort(array + pivot + 1, size - pivot - 1);
}
