#include "function_pointers.h"

/**
 * print_name - Print a name of a function pointer
 * @name: char string
 * @f: function pointer takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

