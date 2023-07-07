#include <stdio.h>
#include "main.h"

/**
 * main - this will print the number of arguments passed to the program
 * @argc: this represents the number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

