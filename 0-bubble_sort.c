#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap- function to swap integers
 * @a: argument 1
 * @b: argument 2
 * return: Nothing void
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
* bubble_sort - this function sorts an array
* @array: array that is of integers
* @size: size of arr
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}