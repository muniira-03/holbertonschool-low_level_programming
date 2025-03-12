#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory containing s1 followed by s2
 *         NULL if it fails or if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int len1 = 0, len2 = 0, i;

    /* Handle NULL strings by treating them as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of s1 and s2 */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Allocate memory for the concatenated string */
    concat = malloc(sizeof(char) * (len1 + len2 + 1));  /* +1 for null terminator */
    if (concat == NULL)
        return (NULL);

    /* Copy s1 to concat */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy s2 to concat */
    for (i = 0; i < len2; i++)
        concat[len1 + i] = s2[i];

    /* Add null terminator */
    concat[len1 + len2] = '\0';

    return (concat);
}
