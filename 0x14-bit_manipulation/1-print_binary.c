/**
 * print_base_digit - print a string of digits for a specific base
 * @number: the number to be printed
 * @base: the base for the number to be printed
 *
 * Return: number of digits printed
 */

/*
int print_base_digit(long number, int base)
{
	int digit_count;
	char *digits;

	digits = "0123456789";

	if (number < 0)
	{
		return (write(1, "-", 1) + print_base_digit(-number, base));
	}
	else if (number < base)
	{
		return (print_char(digits[number]));
	}
	else
	{
		digit_count = print_base_digit(number / base, base);
		return (digit_count + print_base_digit(number % base, base));
	}
}
*/

#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: the number to convert to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	char *bin_digits = "01";

	if (n < 2)
	{
		_putchar(*(bin_digits + n));
	}
	else
	{
		print_binary(n / 2);
		print_binary(n % 2);
	}
}
