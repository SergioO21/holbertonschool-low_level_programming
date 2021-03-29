#include "holberton.h"

/**
 * create_file - Creates a file.
 *
 * @filename: The file name.
 * @text_content: The content of the file.
 *
 * Return: - (1) on success, (-1) on failure (file can not be created,
 *           file can not be written, write fails, etc).
 *         - If the file already exists, truncate it.
 *         - If @filename is NULL return (-1).
 *         - If @text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	i = 0;

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == EOF)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	wr = write(op, text_content, i);

	if (wr == EOF)
		return (-1);

	close(op);

	return (1);
}
