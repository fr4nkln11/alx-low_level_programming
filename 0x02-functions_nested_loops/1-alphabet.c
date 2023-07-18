#include "main.h"

/**
 * print_alphabet - writes alphabet to screen
 *
 * Description: "Prints all
 * the alphabets to the screen"
 *
 * Return: Returns void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
