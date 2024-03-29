#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
