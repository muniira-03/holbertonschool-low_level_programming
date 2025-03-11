#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 2, next;

    printf("%lu, %lu", fib1, fib2);

    for (count = 3; count <= 50; count++)
    {
        next = fib1 + fib2;
        printf(", %lu", next);
        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");
    return (0);
}
