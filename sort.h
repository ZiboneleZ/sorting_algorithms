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

int splitor(int *arr, int left, int right, size_t size);

void sorting(int *arr, int left, int right, size_t size);

void shell_sort(int *array, size_t size);

void cocktail_sort_list(listint_t **list);

void counting_sort(int *array, size_t size);

void merge_sort(int *array, size_t size);

void heap_sort(int *array, size_t size);

void heapify(int *array, int idx, int idx2, size_t size);

void radix_sort(int *array, size_t size);

void bitonic_sort(int *array, size_t size);

void quick_sort_hoare(int *array, size_t size);

void sort_deck(deck_node_t **deck);


