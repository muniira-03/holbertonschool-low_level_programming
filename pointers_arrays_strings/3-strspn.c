#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to search
 * @accept: the characters to accept
 * Return: the number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*s == *ptr)
				break;
			ptr++;
		}
		if (*ptr == '\0')
			break;
		count++;
		s++;
	}
	return (count);
}
