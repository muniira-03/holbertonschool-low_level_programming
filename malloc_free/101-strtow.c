#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be checked.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		while (str[i] == ' ' && str[i] != '\0') /* Skip spaces */
			i++;

		if (str[i] != ' ' && str[i] != '\0') /* Found the start of a word */
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0') /* Skip the word */
				i++;
		}
	}
	return (count);
}

/**
 * allocate_words - Allocates memory for the array of words.
 * @str: The string containing words.
 * @word_count: The number of words to allocate space for.
 *
 * Return: A pointer to the array of words or NULL on failure.
 */
char **allocate_words(char *str, int word_count)
{
	char **words;
	int i = 0, j = 0, k = 0, len;

	words = malloc(sizeof(char *) * (word_count + 1)); /* +1 for NULL terminator */
	if (words == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;

		if (str[i] != ' ' && str[i] != '\0')
		{
			len = 0;
			while (str[i + len] != ' ' && str[i + len] != '\0')
				len++;

			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}

			for (k = 0; k < len; k++)
				words[j][k] = str[i + k];

			words[j][k] = '\0'; /* Null-terminate the word */
			j++;
			i += len;
		}
	}
	words[j] = NULL; /* Null-terminate the array */
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of words, or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = allocate_words(str, word_count);
	return (words);
}
