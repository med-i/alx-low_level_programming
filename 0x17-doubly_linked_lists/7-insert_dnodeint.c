#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list.
 * @idx: index where the new node should be added. Index starts at 0.
 * @n: data for the new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (current)
	{
		if (count == idx - 1)
		{
			new->next = current->next;
			new->prev = current;
			if (current->next)
				current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
		count++;
	}

	free(new);
	return (NULL);
}
