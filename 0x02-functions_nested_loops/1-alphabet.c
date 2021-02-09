#include "holberton.h"

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
