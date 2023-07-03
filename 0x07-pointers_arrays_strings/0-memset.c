#include "main.h"
/**
 * _memset - function that fills memory with specific values
 *@s: first value starting address of memory to be filled 
 *@b: second value is the desired value
 *@n: thirth value the number of bytes tonbe changed
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
