#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal format
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - test the array_range function
 *
 * Return: Always 0.
 */
int main(void)
{
	int *a;

	/* Test the array_range function with min=0, max=10 */
	a = array_range(0, 10);
	if (a == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	simple_print_buffer(a, 11);

	/* Free the allocated memory */
	free(a);

	return (0);
}
