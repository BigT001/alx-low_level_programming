#include "main.h"

/**
 * print_times_table - Prints times table of  the input.
` * starting with 0.
 * @n: The value to be printed.
 */

void print_timeS_table(int n);

{
	int num, mult, prod

	if (n >= 0 && n <= 14)
	{
	for (num = 0; num <= n; num++)
	{
	for (mult = 0; mult <= n; mult++)
	{
	prod = num * mult
	if (prod > 99)
	{
	_putchar(',');
	_putchar(32);
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10) % 10) + '0');
	_putchar((prod % 10) + '0');
	}
	else if (prod > 9)
	{
	_putchar(',');
	_putchar(32);
	_putchar(32);
	_putchar(((prod / 10) % 10) + '0');
	_putchar((prod % 10) + '0');
	}
	else
	{
	if (multi != 0)
	{
	_putchar(',');
	_putchar(32);
	_putchar(32);
	_putchar(32);
	}
	_putchar(prod + '0');
	}
	}
	_putchat('\n');
	}
	}
}
