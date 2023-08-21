#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

