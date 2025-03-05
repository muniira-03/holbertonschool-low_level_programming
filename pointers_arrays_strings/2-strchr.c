#include "main.h"
#include <stddef.h>

/**
* _strchr - Locates a character in a string.
 * @s: The string to search in.
 *@c: The character to find.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (s);
	eles
	
        s++;
    }

    if (c == '\0') /* Check if c is the null terminator */
        return (s);

    return (NULL);
}
