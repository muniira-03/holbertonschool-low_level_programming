#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);  /* 1 (True) */

    r = is_palindrome("redder");
    printf("%d\n", r);  /* 1 (True) */

    r = is_palindrome("test");
    printf("%d\n", r);  /* 0 (False) */

    r = is_palindrome("step on no pets");
    printf("%d\n", r);  /* 1 (True) */

    return (0);
}
