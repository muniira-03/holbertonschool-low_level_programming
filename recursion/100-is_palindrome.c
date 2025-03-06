#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * helper_palindrome - Helper function to check palindrome
 * @s: The string
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int helper_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (helper_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1)
		return (1);
	return (helper_palindrome(s, 0, len - 1));
}
