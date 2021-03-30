#include "holberton.h"

#define BUFFER 1024

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: Number of arguments.
 * @argv: Value of the arguments.
 *
 * Return: (0).
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t reader, writer;
	char buffer[BUFFER];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	file_from = open(argv[1], O_RDONLY);

	if (file_from == EOF)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == EOF)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		reader = read(file_from, buffer, BUFFER);
		writer = write(file_to, buffer, reader);
	} while (reader == BUFFER);

	if (reader == EOF)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);

	if (writer == EOF)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	if (close(file_from) == EOF)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == EOF)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
