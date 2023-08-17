#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
