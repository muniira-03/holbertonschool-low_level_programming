#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		str++;
	}
	return (count);
}

/**
 * allocate_words - Allocates memory for the array of strings
 * @str: The string to allocate words for
 *
 * Return: Pointer to an array of strings, or NULL on failure
 */
char **allocate_words(char *str)
{
	char **words;
	int word_count, i, j, len;

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	i = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
		{
			len = 0;
			while (str[len] && str[len] != ' ' && str[len] != '\t' && str[len] != '\n')
				len++;
			words[i] = malloc((len + 1) * sizeof(char));
			if (!words[i])
				return (NULL);
			for (j = 0; j < len; j++)
				words[i][j] = str[j];
			words[i][j] = '\0';
			i++;
			str += len;
		}
		else
			str++;
	}
	words[i] = NULL;
	return (words);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = allocate_words(str);
	return (words);
}
