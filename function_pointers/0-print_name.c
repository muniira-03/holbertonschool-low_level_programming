#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: function pointer that defines how to print the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
