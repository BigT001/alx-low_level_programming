#include "main.h"

/**
 * print_binary - This will print binary
 * @n: This is the number to print in binary
 *
 * Return: no
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int resent;

	for (a = 63; a >= 0; a--)
	{
		resent = n >> a;

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

