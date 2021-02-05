#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int i = 0;
	char base16[] = "0123456789abcdef\n";

	while (base16[i] != '\0')
	{
		putchar(base16[i]);
		i++;
	}

	return (0);
}
