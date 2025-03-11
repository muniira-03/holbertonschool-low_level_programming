#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: Number to print
 */
void print_number(int n)
{
    if (n >= 10)
        print_number(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The times table to print
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (j > 0) /* Print comma and spaces */
            {
                _putchar(',');
                _putchar(' ');

                /* Add proper spacing for alignment */
                if (result < 10)
                    _putchar(' '), _putchar(' ');
                else if (result < 100)
                    _putchar(' ');
            }
            print_number(result);
        }
        _putchar('\n');
    }
}
