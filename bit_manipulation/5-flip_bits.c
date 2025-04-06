#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to convert n to m.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1; /* Increment if LSB is 1 */
		xor >>= 1;        /* Shift right */
	}
	return (count);
}
