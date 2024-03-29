#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints to the
 *	POSIX standard output.
 * @filename: name of the file
 * @letters:the number of letters it should read and print
 * Return: actual number of letters it could read and print
 *	or 0 if filename is NULL or write function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bytes_read, bytes_printed, tot_printed = 0;

	char buffer[2048];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (bytes_read < letters)
			letters = bytes_read;

		bytes_printed = write(STDOUT_FILENO, buffer, letters);

		if (bytes_printed != letters)
		{
			close(fd);
			return (0);
		}

		tot_printed += bytes_printed;

		if (bytes_read == SIZE_MAX)
		{
			close(fd);
			return (0);
		}
	}

	close(fd);
	return (tot_printed);
}
