#include "holberton.h"

/**
 * main -
 *
 * @argc: Number of arguments.
 * @argv: Value of arguments.
 *
 * Return:
 *
 */

int main(int argc, char **argv)
{
	int i, value, cents;
	int coins[] = {25, 10, 5, 2, 1};

	i = cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	while (value > 0 && i < 5)
	{
		cents += value / coins[i];
		value = value % coins[i];
		i++;
	}

	printf("%d\n", cents);
	return (0);
}
