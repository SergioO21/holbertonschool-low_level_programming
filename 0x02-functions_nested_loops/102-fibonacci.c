#include <stdio.h>

/**
 * main - Starting point of the program
 * Return: Always 0
 */

int main(void)
{
	long unsigned int i = 0, a = 1, b = 2, c = 0;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if (i != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
