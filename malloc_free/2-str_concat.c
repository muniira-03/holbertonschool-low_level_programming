#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to  newly allocated space containing concatenated string,
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len1 = 0, len2 = 0;

	/* If either string is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of both strings */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the new string */
	result = malloc(sizeof(char) * (len1 + len2 + 1)); /* +1 for null term */
	if (result == NULL)
		return (NULL);

	/* Copy s1 to the new string */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy s2 to the new string */
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	/* Null-terminate the result string */
	result[i + j] = '\0';

	return (result);
}
