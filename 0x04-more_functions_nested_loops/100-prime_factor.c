#include <stdio.h>

/**
 * main - Starting point of the program
 * Return: Always 0
 */

int main(void)
{
	long n = 612852475143;
	long div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;

		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
