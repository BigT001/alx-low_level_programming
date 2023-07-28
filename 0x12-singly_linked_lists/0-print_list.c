#include <stdio.h>
#include "lists.h"

/**
 * print_list - This will print all the elemements in a linked list
 * @h: This is a pointer to the list_t
 *
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

