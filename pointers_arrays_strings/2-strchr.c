#include "main.h"
#include <stddef.h>  /* Include this for NULL */

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character c,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    while (*s)  /* Loop through the string until the null-terminator */
    {
        if (*s == c)  /* If the current character matches the target */
        {
            return (s);  /* Return the pointer to the matching character */
        }
        s++;  /* Move to the next character */
    }
    if (c == '\0')  /* Check if the character is the null-terminator */
    {
        return (s);  /* Return pointer to the null-terminator */
    }

    return (NULL);  /* Character not found, return NULL */
}
