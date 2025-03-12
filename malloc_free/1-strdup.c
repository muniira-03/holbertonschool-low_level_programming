#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *dup;
    int len = 0, i;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = str[i];

    dup[len] = '\0';
    return (dup);
}
