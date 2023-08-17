#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: "A program to multiply two integers"
 *
 * Return: 0 (Success)
 * 1 (Error)
 */

int main(int argc, char *argv[])
{
	int first, second, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);
	product = first * second;

	printf("%d\n", product);
	return (0);
}
