#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers
 * @head: A pointer to the head of the linked list
 *
 * Return: The number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	int count = 0;

	if (!head || !current)
		exit(98);

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			current = current->next;
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		current = current->next;
	}

	return (count);
}
