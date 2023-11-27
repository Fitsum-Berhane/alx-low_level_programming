#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**

 * read_textfile - Reads a text file and prints it to the POSIX stdoutput.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_chars;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	num_chars = read(fd, buf, letters);
	if (num_chars == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	buf[num_chars] = '\0'; /* Null-terminate the buffer */

	num_chars = write(STDOUT_FILENO, buf, num_chars);
	if (num_chars == -1 || num_chars != (int)letters)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);

	return (num_chars);
}
