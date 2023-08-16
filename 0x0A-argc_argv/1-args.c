#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: an array of argument strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));

	return (0);
}
