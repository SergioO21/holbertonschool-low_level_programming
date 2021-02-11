#include <stdio.h>

/**
 * main - Starting point of the program
 * Return: Always 0
 */

int main(void)
{
	unsigned long long int i = 0, a = 1, b = 2, c = 0;

	printf("%llu, %llu, ", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf("%llu", c);
		a = b;
		b = c;

		if (i != 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
