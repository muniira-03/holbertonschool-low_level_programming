#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    multiply(argv[1], argv[2]);
    return (0);
}
