#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This adds a new node at thr end of a linked list
 * @head: This is a double pointer to the list_t list
 * @str: This is the string to add to te new node
 *
 * Return: Returns address of the new elemrnt, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}

