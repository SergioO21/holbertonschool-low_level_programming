#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int l = 0;

	while  (l <= '9')
	{
		int r = 0;

		while  (l <= 9)
		{
			putchar(l);
			putchar(r);

			if (l != '9' || r != '9')
			{
				putchar(',');
				putchar(' ');
			}

			r += 1;
		}

		l += 1;
	}

	putchar('\n')

	return (0);
}
