#include <stdio.h>

/**
 * main - Finds and prints the sum of even Fibonacci numbers <= 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, next;
    unsigned long sum_even = 2;

    while (1)
    {
        next = fib1 + fib2;
        if (next > 4000000)
            break;

        if (next % 2 == 0)
            sum_even += next;

        fib1 = fib2;
        fib2 = next;
    }

    printf("%lu\n", sum_even);
    return (0);
}
