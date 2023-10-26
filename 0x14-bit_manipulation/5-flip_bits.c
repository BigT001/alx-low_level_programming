#include "main.h"

/**
 * flip_bits - This will count the number is bits
 * to change.
 * @n: first number.
 * @m: second number.
 *
 * Return: The number of  bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int occuring;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		occuring = exclusive >> i;
		if (occuring & 1)
			count++;
	}
	return (count);
}
