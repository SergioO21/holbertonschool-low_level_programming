#include "holberton.h"

/**
 * main - Print all arguments it receives.
 *
 * @argc: Number of arguments.
 * @argv: Value of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
