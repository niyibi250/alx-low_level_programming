#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print string
 * @separator:between strings
 * @n:number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	char *word;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(list, char*);
		(word != NULL) ? printf("%s", word) : printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
