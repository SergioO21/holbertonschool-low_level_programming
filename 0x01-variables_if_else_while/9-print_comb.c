#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int number = 48;
	int coma = 44;
	int space = 32;

	while (number < 57)
	{
		putchar(number);
		putchar(coma);
		putchar(space);
		number += 1;
	}

	putchar(number);

	return (0);
}
