#include "main.h"
/**
 * print_rev - reverse string
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i;

	int sum = 0;

	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	sum = sum + i;

	for (count = sum; count > -1; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
