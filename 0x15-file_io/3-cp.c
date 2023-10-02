#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int code, char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file");

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close file descriptor");

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close file descriptor");

	return (0);
}
