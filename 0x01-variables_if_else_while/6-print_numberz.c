#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		number += 1;
	}

	return (0);
}
