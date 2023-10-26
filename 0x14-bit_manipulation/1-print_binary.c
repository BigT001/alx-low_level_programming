#include "main.h"

/**
 * print_binary - This will print binary
 * @n: This is the number to print in binary
 *
 * Return: no
 */

void print_binary(unsigned long int n)
{
	int i, count = 1;
	/*unsigned long int resent;*/

	for (i = 63; i >= 0; i--)
	{
		/*resent = n >> i;*/

		if ((n >> i) & 1)
		{
			_putchar('1');
			count = 0;
		}

		else if (!count)
		{
			_putchar('0');
		}
	}
	if (count)
		_putchar('0');
}

