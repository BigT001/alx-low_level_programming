#include "main.h"

/**
 * clear_bit - This sets the bit at a specific index to 0.
 * @n: points to an unsigned long integer to modify.
 * @index: index of bit to clear.
 *
 * Return: 1 on success, -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

