#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *current;
	int count = 0;

	if (!h || !*h)
		return (0);

	slow = *h;
	fast = *h;

	while (slow)
	{
		current = slow;
		slow = slow->next;
		free(current);
		count++;

		if (fast && fast->next)
			fast = fast->next->next;

		if (fast && slow == fast)
		{
			while (slow != fast)
			{
				current = slow;
				slow = slow->next;
				free(current);
				count++;
			}
		}
	}

	*h = NULL;

	return (count);
}
