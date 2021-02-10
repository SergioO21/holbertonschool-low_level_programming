#include "holberton.h"

/**
 * jack_bauer - main function
 *
 * Description: [jack_bauer] Prints every minutes of the day
 * Return: 0
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar (x / 10 + '0');
			_putchar (x % 10 + '0');
			_putchar (':');
			_putchar (y / 10 + '0');
			_putchar (y % 10 + '0');
			_putchar('\n');
		}
	}
}
