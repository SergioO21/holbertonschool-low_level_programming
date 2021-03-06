#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));

		if (separator == 0)
			continue;

		else if (i + 1 != n)
			printf("%s", separator);
	}

	va_end(ar);
	printf("\n");
}
