#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
