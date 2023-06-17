#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - main is the entry point
 * Return-  Always return to 0 (success)
 */

int main(void)

{

	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'e'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
