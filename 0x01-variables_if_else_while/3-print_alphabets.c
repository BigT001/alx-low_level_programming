#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is the enty point of this code
 * Return: is always 0 (success)
 */

int main(void)

{

	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	putchar(lowc);

	for (lowc = 'A'; lowc <= 'Z'; lowc++)
	putchar(lowc);
	putchar('\n');

	return (0);
}
