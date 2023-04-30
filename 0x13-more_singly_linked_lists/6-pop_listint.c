#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node of a listint_t linked list
 *
 * Return: the head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *n_node;
	int n;

	if (!head || !*head)
		return (0);

	n_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = n_node;

	return (n);
}
