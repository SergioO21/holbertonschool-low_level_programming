/*#include "holberton.h"*/

/**
 * main - Starting point of the program
 *
 * Description:
 * Check multiples of 3 and 5 and print Fizz, Buzz or FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}