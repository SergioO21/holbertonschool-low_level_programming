#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int number = 48;
	int i = 0;
	char nline[] = "\n";

	while (number < 58)
	{
		putchar(number);
		number += 1;
	}

	for (i = 0; i < 2 ; i++)
	{
	putchar(nline[i]);
	}

	return (0);
}
