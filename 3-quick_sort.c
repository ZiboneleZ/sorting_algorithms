#include "sort.h"


void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sorting(array, 0, size - 1, size);
}

void sorting(int *arr, int left, int right, size_t size)
{
	int p;

	if (left < right)
	{
		p = splitor(arr, left, right, size);
		sorting(arr, left, p - 1, size);
		sorting(arr, p + 1, right, size);
	}
}

int splitor(int *arr, int left, int right, size_t size)
{
	int i, j, p, temp;

	p = arr[right];
	i = left;

	for (j = left; j < right; j++)
	{
		if (arr[j] < p)
		{
			if (i != j)
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[right])
	{
		temp = arr[i];
		arr[i] = arr[right];
		arr[right] = temp;
		print_array(arr, size);
	}

	return (i);

}
