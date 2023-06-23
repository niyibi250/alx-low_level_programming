#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_number - print list of numbers
 * @separator: sepater numbers
 * @n:number of number to be printered
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;

	unsigned int i;

	va_start(number, n);

	if(separator == NULL)
		return;
	for(i = 0; i <= (n - 1); i++)
	{
		if(i < (n - 1))
		{
			printf("%d%s ",va_arg(number, int),separator);
		}
		else
			printf("%d",va_arg(number, int));

	}
	printf("\n");
	return;
}
