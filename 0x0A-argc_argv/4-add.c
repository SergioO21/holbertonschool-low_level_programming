#include "holberton.h"

/**
 * main - Adds positive numbers and print the result,
 *        followed by a new line.
 *
 * @argc: Number of arguments.
 * @argv: Value of arguments.
 *
 * Return: If the arguments are different than a digit, return (1),
 *         Else, return (0).
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);
	return (0);
}
