#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (alphabet[i] != '\0')
	{
		if (i != 5 && i != 17)
		{
			putchar(alphabet[i]);
		}

		i++;
	}

	return (0);
}
