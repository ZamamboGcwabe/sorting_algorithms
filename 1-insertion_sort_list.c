#include "sort.h"

/**
 *swap - swaps two nodes in a doubly-linked list.
 *@h: pointer to the head
 *@x: pointer to the first node
 *@y: pointer to the second node
 */
void swap(listint_t **h, listint_t **x, listint_t *y)
{
	(*x)->next = y->next;
	if (y->next != NULL)
		y->next->prev = *x;
	y->prev = (*x)->prev;
	y->next = *x;

	if ((*x)->prev != NULL)
		(*x)->prev->next = y;
	else
		*h = y;
	(*x)->prev = y;
	*x = y->prev
}

/**
 *insertion_sort_list - sorts a doubly linked list of 
 *integers in ascending order
 *@list: pointer to the head
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *insert;
	listint_t *i;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = temp)
	{
		temp = i->next;
		insert = i->prev;

		while (insert != NULL && i->n < insert->n)
		{
			swap(list, &insert, i);
			print_list((const listint_t *)*list);
		}
	}
}
