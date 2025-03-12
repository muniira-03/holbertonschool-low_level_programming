#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string.
 * @str: string to count words from.
 *
 * Return: number of words.
 */
int word_count(char *str)
{
    int i, wc = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            wc++;
    }

    return (wc);
}

/**
 * allocate_word - allocates memory for each word.
 * @str: the string to be split.
 * @start: the index where the word starts.
 * @end: the index where the word ends.
 *
 * Return: a pointer to the allocated memory for the word.
 */
char *allocate_word(char *str, int start, int end)
{
    int i, len = end - start;
    char *word = malloc(sizeof(char) * (len + 1));

    if (word == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        word[i] = str[start + i];
    word[len] = '\0';

    return (word);
}

/**
 * strtow - splits a string into words.
 * @str: string to be split.
 *
 * Return: pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
    int i, j = 0, len, wc;
    char **words;

    if (str == NULL || *str == '\0')  /* check for NULL or empty string */
        return (NULL);

    len = 0;
    while (str[len] != '\0')  /* calculate string length */
        len++;

    wc = word_count(str);  /* calculate word count */
    if (wc == 0)  /* No words found */
        return (NULL);

    words = malloc(sizeof(char *) * (wc + 1));  /* allocate memory for the array of words */
    if (words == NULL)
        return (NULL);

    for (i = 0; i < len && j < wc; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            int start = i;
            while (i < len && str[i] != ' ')
                i++;
            words[j++] = allocate_word(str, start, i);  /* allocate and add word */
        }
    }

    words[j] = NULL;  /* set the last element of the array to NULL */
    return (words);
}
