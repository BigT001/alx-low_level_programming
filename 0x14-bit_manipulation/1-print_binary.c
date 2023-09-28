#include "main.h"

/**
 * print_binary - This will print binary
 * @n: This is the number to print in binary
 *
 * Return: no
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int resent;

	for (i = 63; i >= 0; i--)
	{
		resent = n >> i;

		if (resent & 1)
		{
			_putchar('1');
			resent++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

