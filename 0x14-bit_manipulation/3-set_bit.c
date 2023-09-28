#include "main.h"

/**
 * set_bit - This will set a bit in a defined index to 1
 * @n: This will point to the nunber to be changed.
 * @index: This will set to 1
 *
 * Return: 1 on success if fails -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

