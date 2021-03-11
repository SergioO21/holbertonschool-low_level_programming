#include <stdio.h>

/**
 * op_add - Add two numbers.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The sum of @a and @b.
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The difference of @a and @b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The product of @a and @b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The result of the division of @a by @b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Get the remainder of a division.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The remainder of the division of @a by @b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
