#include "main.h"

/**
 * append_text_to_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success and -1 if failes or filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	off_t offset;
	int bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		offset = lseek(fd, 0, SEEK_END);

		if (offset == -1)
		{
			close(fd);
			return (-1);
		}

		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
