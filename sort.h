#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size);

void print_array(int *a, int n);

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}listint_t;

void insertion_sort_list(listint_t **list);

void print_list(const listint_t *list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
