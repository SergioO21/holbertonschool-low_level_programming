#include "holberton.h"

/**
 * print_to_98 - main function
 * @n: Number of user
 * @x: compare to "n" to 98
 *
 * Description: [print_to_98] print from n to 98
 * Return: 0
 */

void print_to_98(int n)
{
	int x = 0;
	
	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
			
		}
	}
	
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
			
		}
	}
}
