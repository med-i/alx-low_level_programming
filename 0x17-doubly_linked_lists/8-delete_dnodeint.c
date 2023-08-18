#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: double pointer to the head of the list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
		{
			if (current->prev)
				current->prev->next = current->next;
			else
				*head = current->next;

			if (current->next)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1);
}
