#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);  /* Call the function to concatenate arguments */
    if (s == NULL)
    {
        return (1);  /* Return 1 if malloc fails */
    }
    printf("%s", s);  /* Print the concatenated string */
    free(s);  /* Free the allocated memory */
    return (0);
}
