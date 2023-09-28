#include "main.h"

/**
 * binary_to_unit - This will convert a binary numbers to integers.
 * @b: This is the string containing the binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decval = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decval = (decval << 1) | (*b - '0');
		b++;
	}
	return (decval);
}

