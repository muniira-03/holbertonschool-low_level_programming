#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	/* If the number is negative, make the last digit positive */
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0'); /* Convert the digit to char and print it */

	return (last_digit);
}
