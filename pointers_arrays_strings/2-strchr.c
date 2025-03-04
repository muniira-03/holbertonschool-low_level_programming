#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to search
 * @c: character to find
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')  /* Check if c is the null terminator */
	{
		return (s);
	}
	return (NULL);
}
