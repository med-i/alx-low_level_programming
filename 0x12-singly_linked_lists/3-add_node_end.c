#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head of the list.
 * @str: the string to duplicate.
 *
 * Return: the address of the new element, otherwise NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current = *head;

	if (!head || !new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{

		while (current->next != NULL)
			current = current->next;

		current->next = new;
	}

	return (new);
}
