#include "variadic_functions.h"

void f_char(va_list ar);
void f_int(va_list ar);
void f_float(va_list ar);
void f_string(va_list ar);

/**
 * print_all - prints anything.
 *
 * @format: Type of variable.
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;

	type options[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};

	va_list ar;
	char *s = "";

	va_start(ar, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;

		while (options[j].op != NULL)
		{
			if (format[i] == options[j].op[0])
			{
				printf("%s", s);
				options[j].f(ar);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ar);
	printf("\n");
}

/**
 * f_char - Print all chars.
 *
 * @ar: List of arguments.
 */

void f_char(va_list ar)
{
	printf("%c", va_arg(ar, int));
}

/**
 * f_int - Print all ints.
 *
 * @ar: List of arguments.
 */

void f_int(va_list ar)
{
	printf("%d", va_arg(ar, int));
}

/**
 * f_float - Print all floats.
 *
 * @ar: List of arguments.
 */

void f_float(va_list ar)
{
	printf("%f", va_arg(ar, double));
}

/**
 * f_string - Print all strings.
 *
 * @ar: List of arguments.
 */

void f_string(va_list ar)
{
	char *str;

	str = va_arg(ar, char*);

	printf("%s", str == 0 ? "(nil)" : str);
}
