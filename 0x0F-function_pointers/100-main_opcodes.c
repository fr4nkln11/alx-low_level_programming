#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *bytes, int length);

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 * 1, 2 (Error)
 */

int main(int argc, char *argv[])
{
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_bytes = (unsigned char *)main;

	print_opcodes(main_bytes, number_of_bytes);
	return (0);
}
/**
 * print_opcodes - print the opcodes of a function
 * @bytes: pointer to an array of bytes
 * @length: number of bytes to print
 *
 * Return: nothing
 */

void print_opcodes(unsigned char *bytes, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		printf("%02x ", bytes[i]);
	}
	printf("\n");
}
