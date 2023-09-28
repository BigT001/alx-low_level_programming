#include "main.h"

/**
 * clear_bit - This will set the value of a bit to 0
 * @n: pointes to the number of changes.
 * @:index: index
 *
 * Return: successful 1 -1 fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

