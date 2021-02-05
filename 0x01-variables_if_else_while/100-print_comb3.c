#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* putchar: Print a character
*/ int main(void)
{
	int x = '0';

	while  (x <= '9')
	{
		int y = '0';

		while  (y <= '9')
		{
			if (x != y)
			{
				if (x < y)
				{
					putchar(x);
					putchar(y);

				if (x == '8' && y == '9')
					break;

				putchar(',');
				putchar(' ');
				}
			}
			x += 1;
		}
		y += 1;
	}

	putchar('\n');
	return (0);
}
