#include "sort.h"

/**
 * This file implements the bubble sort algorithm to sort an array of integers.
 * It includes a swap function to swap two integers and a bubble_sort function
 * to sort the array using the bubble sort algorithm. The print_array function
 * is assumed to be declared elsewhere to print the array state after each swap.
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	char isSorted;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		isSorted = 1;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				isSorted = 0;
				print_array(array, size);
			}
		}
		if (isSorted == 1)
			break;
	}
}

