#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the head of the list.
 *
 * Return: the number of elements, otherwise 0.
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
