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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
