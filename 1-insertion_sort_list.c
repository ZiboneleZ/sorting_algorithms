#include "sort.h"

listint_t *get_head(listint_t *list)
{
	listint_t *tmp;

	tmp = list;
	while (tmp->prev)
		tmp = tmp->prev;
	return (tmp);
}

int swap_dll(listint_t *left, listint_t *right)
{
	if (!left || !right)
		return (EXIT_FAILURE);
	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;
	left->next = right->next;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;
	return (EXIT_SUCCESS);
}

void insertion_sort_list(listint_t **list)
{
	unsigned int major_spotsave, minor_spotsave, i, stats;
	listint_t *major_step, *minor_step;

	major_step = minor_step = *list;
	major_spotsave = minor_spotsave = i = 0;

	if (!list || !*list)
		return;
	while (major_step)
	{
		minor_step = major_step;
		minor_spotsave = major_spotsave;
		while (minor_step->prev && minor_step->n < (minor_step->prev)->n)
		{
			stats = swap_dll(minor_step->prev, minor_step);
			if (stats == 1)
				return;
			minor_step = get_head(*list);
			for (i = 0; i < minor_spotsave; i++)
				minor_step = minor_step->next;

			minor_step = minor_step->prev;
			minor_spotsave--;
			print_list(get_head(*list));
		}

		major_step = get_head(*list);
		for (i = 0; i < major_spotsave; i++)
			major_step = major_step->next;
		major_spotsave++;
		major_step = major_step->next;
	}

	*list = get_head(*list);

}
