#include "sort.h"
/**
 * swap - func to swap nodes
 * @n1: grater node
 * @n2: smaller node
 * Return: nothing
 */
void swap(listint_t *n1, listint_t *n2)
{
	if (n1->prev)
		n1->prev->next = n2;
	if (n2->next)
		n2->next->prev = n1;
	n1->next = n2->next;
	n2->prev = n1->prev;
	n1->prev = n2;
	n2->next = n1;
}
/**
 * insertion_sort_list - insertion sorts a doubly-linked list
 * @list: address of pointer to head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1, *tmp2;

	if (!list || !*list || !(*list)->next)
		return;
	tmp1 = (*list)->next;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		while (tmp2 && tmp2->prev)
		{
			if (tmp2->prev->n > tmp2->n)
			{
				swap(tmp2->prev, tmp2);
				if (!tmp2->prev)
					*list = tmp2;
				print_list((const listint_t *)*list);
			}
			else
				tmp2 = tmp2->prev;
		}

	}
}
