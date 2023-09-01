#include "main.h"

/**
 * get_bit - in a decimal number, this will return the
 * value of a bit at index.
 * @n: This is the nuber of search.
 * @index: index.
 *
 * Return: The value of bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
