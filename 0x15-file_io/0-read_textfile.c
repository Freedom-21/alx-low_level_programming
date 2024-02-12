#include "main.c"

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
	size_t bytes_read, bytes_printed;
	char buffer[1024];

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

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
		if (bytes_read == -1)
		{
			close(fd);
			return (0);
		}
	}

	close(fd);
	return (bytes_printed);
}
