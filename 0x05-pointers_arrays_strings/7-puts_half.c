#include "main.h"
/**
 * puts_half - print half of string
 * @str: string
 */
void puts_half(char *str)
{
	int i, x, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	len = len + i;
	for (x = (len / 2); x < len; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
