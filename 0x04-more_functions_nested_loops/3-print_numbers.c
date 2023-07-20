#include "main.h"

/**
 * print_numbers - print all digits from 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
