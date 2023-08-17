#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg_ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg_ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_ptr, int);
	}

	va_end(arg_ptr);

	return (sum);
}
