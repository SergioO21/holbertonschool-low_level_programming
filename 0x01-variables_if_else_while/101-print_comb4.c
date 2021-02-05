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
			int z = '0';

			while (z <= '9')
			{
				if (x != y && y != z && z != x)
				{
					if (x < y && y < z)
					{
						putchar(x);
						putchar(y);
						putchar(z);

						if (x == '7' && y == '8' && z == '9')
						{
							break;
						}

						putchar(',');
						putchar(' ');
					}
				}
				z += 1;
			}
			y += 1;
		}
		x += 1;
	}
	putchar('\n');
	return (0);
}

