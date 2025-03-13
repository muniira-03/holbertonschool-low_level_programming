#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Tests the multiplication function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    char *result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    result = multiply(argv[1], argv[2]);
    if (!result)
    {
        printf("Error\n");
        return (98);
    }

    printf("%s\n", result);
    free(result);

    return (0);
}
