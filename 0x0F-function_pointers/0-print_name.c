#include <function_pointers.h>
#include <stdlib.h>

/**
 * print_name - check code
 * @name - a name to be displayed
 * @f - a void function
 * Description - a function tha prints name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
