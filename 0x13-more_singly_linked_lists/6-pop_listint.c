#include "lists.h"

/**
 * pop_listint - This deletes the head node of a linked list.
 * @head: This is the pointer to the first element in the linked lsit.
 *
 * Return: Deleted data inside the element. return 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

