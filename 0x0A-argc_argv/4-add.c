#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *numstring);

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * _isdigit - a function that checks if a string is a number
 * @numstring: pointer to string containing numbers
 *
 * Return: 0 (False), 1 (True)
 */

int _isdigit(char *numstring)
{
	int c = 0;

	while (*(numstring + c) != '\0')
	{
		if (*(numstring + c) < 48 || *(numstring + c) > 57)
		{
			return (0);
		}

		c++;
	}

	return (1);
}
