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
	dlistint_t *current, *new;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (!*h)
			*h = new;
		else
		{
			new->next = *h;
			(*h)->prev = new;
			*h = new;
		}

		return (new);
	}

	current = *h;
	while (current && idx > 1)
	{
		current = current->next;
		idx--;
	}

	if (!current)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	new->prev = current;
	current->next = new;
	if (current->next)
		current->next->prev = new;

	return (new);
}
