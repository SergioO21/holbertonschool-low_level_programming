#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it
 *                 to the POSIX standard output.
 *
 * @filename: The file name.
 * @letters: The number of letters it should read and print.
 *
 * Return: - The actual number of letters it could read and print.
 *         - If the file can not be opened or read, returns (0).
 *         - If filename is NULL returns (0).
 *         - If write fails or does not write the
 *           expected amount of bytes, returns (0).
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == EOF)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	re = read(op, buffer, letters);

	if (re == EOF)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, re);

	if (wr == EOF)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (re);
}
