#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number to find the factorial of
 *
 * Return: the integer factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
