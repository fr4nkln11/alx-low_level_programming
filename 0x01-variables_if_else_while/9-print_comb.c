#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "solution for
 * I sometimes suffer from insomnia.
 * And when I can't fall asleep,
 * I play what I call the alphabet game"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii;

	for (ascii = 48; ascii <= 57; ascii++)
	{
		putchar(ascii);
		if (ascii != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
