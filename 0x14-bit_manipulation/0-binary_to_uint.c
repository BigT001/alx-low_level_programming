#include "main.h"

/**
 * binary_to_unit - This will convert a binary numbers to integers.
 * @b: This is the string containing the binary number
 *
 * Return: converted number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int as;
	int len, base_two;

	if (!b)
		return (0);

	as = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

	if (b[len] & 1)
	{
		as += base_two;
	}
	}
	return (as);
}
