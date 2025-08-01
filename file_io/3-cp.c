#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error_exit - Print error message and exit with given code
 * @code: Exit code
 * @format: Format string for error
 * @arg: Argument to print in format
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * main - Copies the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with various codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_count, write_count;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		close(fd_from), error_exit(99, "Error: Can't write to %s\n", argv[2]);
	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 || write_count != read_count)
		{
			close(fd_from);
			if (close(fd_from) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
				close(fd_to), exit(100);
			}
			close(fd_to);
			if (close(fd_to) == -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from), close(fd_to), exit(98);
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
