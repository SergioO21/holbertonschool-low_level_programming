#include <stdio.h>

/**
 * main - Starting point of the program
 * Return: Always 0
 */

int main(void)
{
	int i = 0, a = 1, b = 2, c = 0;

	printf("%u, %u, ", a, b);

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%u", c);
		a = b;
		b = c;

		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
