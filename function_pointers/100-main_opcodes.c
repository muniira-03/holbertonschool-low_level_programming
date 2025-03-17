#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	char *main_ptr;

	/* Check for correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert argument to integer */
	num_bytes = atoi(argv[1]);

	/* Check if number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Get pointer to the main function */
	main_ptr = (char *)main;

	/* Print the opcodes in hexadecimal */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i] & 0xFF);

		/* Add space after each byte except the last one */
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
