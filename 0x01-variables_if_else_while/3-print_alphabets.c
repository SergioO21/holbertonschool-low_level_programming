#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetUp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ$";

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}

	i = 0;

	while (alphabetUp[i] != '\0')
	{
		putchar(alphabetUp[i]);
		i++;
	}

	return (0);
}
