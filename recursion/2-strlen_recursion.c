#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: if we reach the end of the string */
		return (0);
	return (1 + _strlen_recursion(s + 1)); /* Recursively call the function */
}
