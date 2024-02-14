#include "main.h"

/**
 * error_exit - Print error message and exit with specified code
 * @code: exit code
 * @format: error message format string
 * @...: additional arguments for the error message
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(2, format, args);
	va_end(args);
	exit(code);
}
/**
 * main - Copy the content of one file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, otherwise exit with error code
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to = -1;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n");
	}
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);

}
