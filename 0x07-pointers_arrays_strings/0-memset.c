#include "main.h"
/**
 * _memset - fill a block of memory witj specific values
 * @s: starting address of memoryy to be filled
 * @b: the desired value
 * @n number of bytes to be changed
 *
 * Return: changed array with new va;ues for n bytes
 */

char *_memset(char *s, char b, unsigned int n);

{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}

return (s);
}
