#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints error message and exits.
 * @exit_code: Code to exit with.
 * @message: The message to print.
 * @filename: The file name to include in message.
 */
void print_error(int exit_code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * main - Copies content of file_from to file_to.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to", "");

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		print_error(98, "Error: Can't read from file", argv[1]);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		close(from_fd);
		print_error(99, "Error: Can't write to", argv[2]);
	}

	while ((r = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to_fd, buffer, r);
		if (w != r)
		{
			close(from_fd);
			close(to_fd);
			print_error(99, "Error: Can't write to", argv[2]);
		}
	}
	if (r == -1)
	{
		close(from_fd);
		close(to_fd);
		print_error(98, "Error: Can't read from file", argv[1]);
	}

	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);
	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

	return (0);
}

