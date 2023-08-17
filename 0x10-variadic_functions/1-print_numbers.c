#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list arg_ptr;

	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			if (seperator != NULL)
			{
				printf("%s", seperator);
			}
		}
		num = va_arg(arg_ptr, int);
		printf("%d", num);
	}

	va_end(arg_ptr);
	printf("\n");
}
