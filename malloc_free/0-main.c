#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Tests the create_array function
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;
    unsigned int i;

    buffer = create_array(98, 'H');
    if (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }

    for (i = 0; i < 98; i++)
    {
        _putchar(buffer[i]);
    }
    _putchar('\n');

    free(buffer);
    return (0);
}
