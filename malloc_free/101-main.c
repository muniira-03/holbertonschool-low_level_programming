#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char **words;
    char str[] = "This is an example string";
    int i;

    words = strtow(str);
    if (words == NULL)
    {
        printf("Error\n");
        return (1);
    }

    for (i = 0; words[i] != NULL; i++)
    {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    free(words);

    return (0);
}
