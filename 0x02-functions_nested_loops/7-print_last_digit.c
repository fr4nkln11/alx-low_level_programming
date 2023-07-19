#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @n: integer value to check
 *
 * Return: last digit of integer
 */

int print_last_digit(int n)
{
	n = n % 10;

	_putchar(n + '0');
	return (n);
}
