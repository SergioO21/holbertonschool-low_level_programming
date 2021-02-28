#include "holberton.h"

/**
 * main - Print the result of the multiplication of two numbers (or Error),
 *        followed by a new line.
 *
 * @argc: Number of arguments.
 * @argv: Value of arguments.
 *
 * Return: If the program does not receive two arguments, return (1),
 *         Else, return (0).
 *
 */

int main(int argc, char **argv)
{
	int i, mul;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		mul = 1;

		for (i = 1; i <= 2; i++)
			mul = mul * atoi(argv[i]);

		printf("%d\n", mul);
		return (0);
	}
}
