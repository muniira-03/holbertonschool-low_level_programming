#include "main.h"
#include <stddef.h> /* For NULL */
#include <stdio.h>  /* For printf */
#include <stdlib.h> /* For free */

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; i++)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char **tab;
    int i; /* ✅ Declaration moved to the top as per C90 */

    tab = strtow("      Best School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }

    print_tab(tab);

    /* ✅ Free memory properly */
    for (i = 0; tab[i] != NULL; i++)
    {
        free(tab[i]);
    }
    free(tab);

    return (0);
}
