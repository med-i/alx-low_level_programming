#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head of the list.
 * @n: data for the new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
