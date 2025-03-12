#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string containing all arguments,
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length of the string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;  /* For the new line character after each argument */
	}

	str = malloc(sizeof(char) * (len + 1));  /* +1 for the null terminator */
	if (str == NULL)
		return (NULL);

	/* Concatenate arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';  /* New line after each argument */
		k++;
	}

	str[k] = '\0';  /* Null-terminate the string */
	return (str);
}
