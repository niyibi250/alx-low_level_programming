#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - this function add the given number
 * @n: number of passed arguments
 * Return: sum of number if n=0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list page;

	int sum = 0;

	unsigned int i;

	va_start(page, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(page, int);
	}
	va_end(page);
	return (sum);
}
