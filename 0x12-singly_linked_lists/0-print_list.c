#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the head of the list.
 *
 * Return: the number of nodes, otherwise 0.
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	int nodes = 0;

	for (current = h; current; current = current->next, nodes++)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
	}

	return (nodes);
}
