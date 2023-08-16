#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: A pointer to a name string
 * @f: a pointer to a function that takes a string
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
