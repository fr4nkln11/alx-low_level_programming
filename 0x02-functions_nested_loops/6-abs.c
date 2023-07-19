#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: integer value
 *
 * Return: absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * n);
	}
	else
	{
		return (n);
	}
}
