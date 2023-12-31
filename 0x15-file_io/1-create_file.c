#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file.
 * @text_content: The text content to write.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_chars, text_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	text_len = 0;
	while (text_content[text_len] != '\0')
		text_len++;

	num_chars = write(fd, text_content, text_len);
	if (num_chars == -1 || num_chars != text_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
