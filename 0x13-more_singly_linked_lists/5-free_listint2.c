#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *n_node;

	if (!head || !*head)
		return;

	while (*head)
	{
		n_node = (*head)->next;
		free(*head);
		*head = n_node;
	}
}
