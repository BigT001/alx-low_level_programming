#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int.
 * @b: Points to a string of 0 and 1 char.
 *
 * Return: 0 if b is NULL.
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

