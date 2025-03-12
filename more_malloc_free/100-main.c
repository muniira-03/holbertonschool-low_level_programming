#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0 && i != 0)
			printf("\n");
		printf("0x%02x ", buffer[i]);
	}
	printf("\n");
}

/**
 * main - Entry point to test the _realloc function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *p;
	int i;

	/* Allocate initial memory block */
	p = malloc(sizeof(char) * 10);
	if (p == NULL)
		return (1);

	/* Fill the original memory block with value 98 ('b') */
	for (i = 0; i < 10; i++)
		p[i] = 98;

	printf("Original buffer:\n");
	simple_print_buffer(p, 10);

	/* Reallocate the memory block to a larger size */
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	if (p == NULL)
		return (1);

	/* Fill the new space with value 98 ('b') */
	for (i = 10; i < 98; i++)
		p[i] = 98;

	printf("\nReallocated buffer:\n");
	simple_print_buffer(p, 98);

	/* Free allocated memory */
	free(p);

	return (0);
}
