#include "main.h"
/**
 * print_alphabet - this print letters
 * Return: nathing
 */
void print_alphabet(void)
{
	int numb = 97;

	while (numb < 123)
	{
		_putchar(numb);
		numb++;
	}
	_putchar('\n');
}
