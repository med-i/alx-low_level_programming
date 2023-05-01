#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head of list
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (0);

	for (current = head; current; current = current->next)
		sum += current->n;

	return (sum);
}
