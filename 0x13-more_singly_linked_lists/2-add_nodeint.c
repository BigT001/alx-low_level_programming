#include "lists.h"

/**
 * add_nodeint - This will add new node at the beginning of a linked list.
 * @head: points to the first node in the list.
 * @n: Data to add to the new node
 *
 * Return: Pointer to the new node, NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
