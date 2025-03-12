#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient
 *         memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
    char *dup_str;
    int i, len;

    if (str == NULL)  /* If the input string is NULL, return NULL */
        return (NULL);

    /* Calculate the length of the string */
    for (len = 0; str[len] != '\0'; len++)
        ;

    /* Allocate memory for the duplicated string */
    dup_str = malloc(sizeof(char) * (len + 1)); /* +1 for the null terminator */
    if (dup_str == NULL)  /* If memory allocation fails, return NULL */
        return (NULL);

    /* Copy the contents of str to dup_str */
    for (i = 0; i < len; i++)
        dup_str[i] = str[i];

    /* Null-terminate the duplicated string */
    dup_str[i] = '\0';

    return (dup_str);
}
