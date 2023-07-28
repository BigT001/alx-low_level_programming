#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - This will print a sentence before the main
 * function will be executed
 *
 */

void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upone my back!\n");
}

