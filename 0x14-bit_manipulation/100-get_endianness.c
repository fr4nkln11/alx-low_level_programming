#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int integer = 1;
	unsigned char *pointer_to_byte;

	pointer_to_byte = (unsigned char *)&integer;

	if (*pointer_to_byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
