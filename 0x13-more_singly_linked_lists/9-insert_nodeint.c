#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: value to store in the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!cur || !new)
		return (NULL);

	while (cur && i < idx - 1)
	{
		cur = cur->next;
		i++;
	}

	if (!cur)
		return (NULL);

	new->n = n;
	new->next = cur->next;
	cur->next = new;

	return (new);
}
