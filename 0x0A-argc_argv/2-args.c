#include <stdio.h>
#include "main.h"

/**
 * main - this will print all arguments recived
 * @argc: this represents the number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}

