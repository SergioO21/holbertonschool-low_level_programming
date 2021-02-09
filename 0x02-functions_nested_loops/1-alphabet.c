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
 * print_alphabet - Print alphabet character for character
 */

void print_alphabet(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 27; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');
}

/**
 * main - Starting point of the program
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();

	return (0);
}
