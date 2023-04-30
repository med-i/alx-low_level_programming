#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node of the list,
 * or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i <= index)
	{
		if (index == i)
		{
			node = head;
			break;
		}

		head = head->next;
		i++;
	}

	return (node ? node : NULL);
}
