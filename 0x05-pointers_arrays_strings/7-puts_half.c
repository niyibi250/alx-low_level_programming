#include "main.h"
/**
 * puts_half - print half of string
 * @str: string
 */
void puts_half(char *str)
{
	int i, x, n, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	len = len + i;
	n = len / 2;
	if ((len % 2) == 1)
	{
		n++;
	}
	for (x = n; x < len; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
