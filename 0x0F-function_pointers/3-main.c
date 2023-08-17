#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of args
 * @argv: array of argument strings
 *
 * Return: 0 (success)
 * 98 (Error)
 * 99 (Error)
 * 100 (Error)
 */

int main(int argc, char *argv[])
{
	int first = atoi(argv[1]);
	int second = atoi(argv[3]);
	char *operator = argv[2];
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if ((*operator == '/' || *operator == '%') && second == 0)
	{
		printf("Error\n");
		return (100);
	}

	if (get_op_func(operator))
	{
		result = get_op_func(operator)(first, second);

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (99);
	}

}
