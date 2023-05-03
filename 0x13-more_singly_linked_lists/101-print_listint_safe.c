#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers
 * @head: A pointer to the head of the linked list
 *
 * Return: The number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	int count = 0;

	if (!head)
		return (98);

	slow = head;
	fast = head;

	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;

		if (!fast || !fast->next)
			continue;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)fast, fast->n);
				slow = slow->next;
				fast = fast->next;
				count++;
			}

			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}

	return (count);
}
