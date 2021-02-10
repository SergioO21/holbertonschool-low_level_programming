#include "holberton.h"

/**
 * times_table - main function
 *
 * Return: void.
 */

int main(void)
{
	int a, b, c;
	
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			
			if (b > 0 && c < 10)
				{
				putchar (' ');
				}
			
			if (c >= 10)
				{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
				}
				
			else
				putchar(c + '0');
			
			if (b < 9)
				{
				putchar(',');
				putchar(' ');
				}
		}
		putchar('\n');
	}
	return 0;
}
