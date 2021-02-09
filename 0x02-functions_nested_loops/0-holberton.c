#include "holberton.h"

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
