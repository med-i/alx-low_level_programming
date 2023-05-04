#include "lists.h"

/**
 * get_listint_count - gets the number of nodes in a linked list
 * @head: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t get_listint_count(listint_t *head)
{
	listint_t *slow, *fast;
	int count = 0;

	slow = head;
	fast = head;

	while (slow)
	{
		slow = slow->next;
		count++;

		if (!fast || !fast->next)
			continue;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				fast = fast->next;
				slow = slow->next;
				count++;
			}

			break;
		}
	}

	return (count);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	int count, i;

	if (!h || !*h)
		return (0);

	count = get_listint_count(*h);

	for (i = 0; i < count; i++)
	{
		current = *h;
		*h = (*h)->next;
		free(current);
	}

	*h = NULL;
	return (count);
}
