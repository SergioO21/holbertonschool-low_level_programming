#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Starting point of the program
 * Return: 0
 */

int main(void)
{
	char school[] = "Holberton";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(school[i]);
	}

	_putchar('\n');

	return (0);
}
