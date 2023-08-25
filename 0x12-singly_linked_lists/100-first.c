#include <stdio.h>

void preMainConstructor(void) __attribute__((constructor));

/**
 * preMainConstructor - a function that runs before main()
 *
 * Return: nothing
 */

void preMainConstructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
