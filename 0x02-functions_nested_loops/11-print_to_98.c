#include "holberton.h"

/**
 * print_to_98 - main function
 * @n: Number of user
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

	else if (n == 98)
	{
		printf("%d", n);
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
	printf("\n");
}
