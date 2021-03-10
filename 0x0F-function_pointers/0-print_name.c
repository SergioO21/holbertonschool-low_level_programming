/**
 * print_name - Prints a name.
 *
 * @name: Name received as parameter.
 * @f: Calls the function received as a parameter.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;

	f(name);
}
