#include "main.h"

/**
 * leet - encode into 1337speak
 * @s: input value
 *
 * Return: s value
 */

char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
	for (j = 0; j <= 9; j++)
	{
	if (*(s + i) == a[j])
	{
	*(s + i) = n[j];
	}
	}
	i++;
	}
	return (s);
}
