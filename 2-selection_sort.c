#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j, low, temp;
	int *head;

	if (!array || size < 2)
		return;
	head = array;
	for (i = 0; i < size; i++, head++)
	{
		for (low = i, j = i; j < size; j++)
			if (array[j] < array[low])
			{
				low = j;
			}
		if (i != low)
		{
			temp = array[low];
			array[low] = *head;
			*head = temp;
			print_array(array, size);
		}
	}
}
