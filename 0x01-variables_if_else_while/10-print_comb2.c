#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int i;
	int space = 32;
	int coma = 44;

	for (i = 0; i < 100; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i < 99)
		{
		putchar(coma);
		putchar(space);
		}
	}

	return (0);
}
