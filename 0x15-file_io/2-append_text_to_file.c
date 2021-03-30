#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The file name.
 * @text_content: The new content to add to the file.
 *
 * Return: - (1) on success and (-1) on failure.
 *         - If @filename is NULL returns (-1).
 *         - Returns (1) if the file exists.
 *         - Returns (-1) if the file does not exist or if you do
 *           not have the required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wr, op, i;

	i = 0;

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == EOF)
		return (-1);

	if (!text_content)
		return (1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	wr = write(op, text_content, i);

	if (wr == EOF)
		return (-1);

	close(op);

	return (1);
}
