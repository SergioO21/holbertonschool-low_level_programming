#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int i = 0;
	char base10[] = "0123456789\n";

	while (base10[i] != '\0')
	{
		putchar(base10[i]);
		i++;
	}

	return (0);
}
