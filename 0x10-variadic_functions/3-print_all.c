#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_spec(va_list arg_ptr, char spec);

/**
 * print_all - a function that prints anything.
 * @format: list of types to print
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	if (format != NULL)
	{
		int index;

		va_list arg_ptr;

		va_start(arg_ptr, format);

		index = 0;
		while (*(format + index) != '\0')
		{
			switch (*(format + index))
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					print_spec(arg_ptr, *(format + index));
					index++;
					break;
				default:
					index++;
					continue;
			}
			break;
		}

		while (*(format + index) != '\0')
		{
			switch (*(format + index))
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					printf(", ");
					print_spec(arg_ptr, *(format + index));
				default:
					break;
			}
			index++;
		}

		va_end(arg_ptr);
	}
	printf("\n");
}

/**
 * print_spec - a function that prints an argument
 * based on the format specifier
 * @arg_ptr: argument pointer
 * @spec: format specifier
 *
 * Return: nothing
 */

void print_spec(va_list arg_ptr, char spec)
{
	int integer;
	char character;
	double floating;
	char *string;

	switch (spec)
	{
		case 'c':
			character = (char)va_arg(arg_ptr, int);
			printf("%c", character);
			break;

		case 'i':
			integer = va_arg(arg_ptr, int);
			printf("%i", integer);
			break;

		case 'f':
			floating = va_arg(arg_ptr, double);
			printf("%f", floating);
			break;

		case 's':
			string = va_arg(arg_ptr, char *);
			if (string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		default:
			break;
	}
}
