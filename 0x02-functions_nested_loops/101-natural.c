#include <stdio.h>

/**
 * main - Starting point of the program
 * Return: Always 0
 */

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	for (a = 3; a <= 1024; a += 3)
	{
		b = b + a;

	}

	a = 0;

	for (a = 5; a <= 1024; a += 5)
	{
		c = c + a;
	}
	d = b + c;
	printf("\n \n %d + %d = %d", b, c, d);

	return (0);
}
