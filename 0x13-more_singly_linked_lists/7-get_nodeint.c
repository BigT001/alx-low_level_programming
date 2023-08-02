#include "lists.h"

/**
 * get_nodeint_at_index - returns to index in a linked list.
 * @head: first node in the linked list.
 * @index: node to return.
 *
 * Return: points to needed node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

