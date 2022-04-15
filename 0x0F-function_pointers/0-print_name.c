/**
 * print_name - a function that prints a name
 *
 * @name: the name to be printed
 * @f: printer function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
