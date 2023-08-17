#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @seperator: the string to be printed between strings
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
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
		string = va_arg(arg_ptr, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
	}

	va_end(arg_ptr);
	printf("\n");
}
