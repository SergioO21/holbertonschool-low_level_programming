#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the result of simple operations.
 *
 * @argc: Number of arguments.
 * @argv: Value of arguments.
 *
 * Return: Always (0).
 */

int main(int argc, char **argv)
{
	int result, a, b;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] != '+' &&
	     *argv[2] != '-' &&
	     *argv[2] != '*' &&
	     *argv[2] != '/' &&
	     *argv[2] != '%') ||
	     argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]) (a, b));
	
	printf("%d\n", result);

	return (0);
}
