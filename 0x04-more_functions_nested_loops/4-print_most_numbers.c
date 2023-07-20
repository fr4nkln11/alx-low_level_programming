#include "main.h"

/**
 * print_most_numbers - print all digits from 0-9,
 * except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != 2 || digit != 4)
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
