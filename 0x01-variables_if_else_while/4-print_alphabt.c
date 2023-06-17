#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - main is the entry point
 * Return-  Always return to 0 (success)
 */

int main(void)

{

	char sam, i, q;

	i = 'i';
	q = 'q';

	for (sam = 'a'; sam <= 'z'; sam++)
	{
	if (sam != i && sam != q)
	putchar(sam);
	}
	putchar('\n');
	return (0);
}
