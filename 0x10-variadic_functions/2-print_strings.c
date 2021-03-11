#include "variadic_functions.h"

/**
 *
 *
 *
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	char *string;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ar, char*);

		if (string == NULL)
			printf("(nil)");
		
		else
			printf("%s", string);

		if (separator == 0)
			continue;

		else if (i + 1 != n)
			printf("%s", separator);
	}

	va_end(ar);
	printf("\n");
}
