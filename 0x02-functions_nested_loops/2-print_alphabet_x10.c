#include "main.h"
/**
 * print_alphabet_x10 - print letters
 * Return: void
 */
void print_alphabet_x10(void)
{
	int numb = 0;

	int letter;

	while (numb < 10)
	{
		for (letter = 97; letter < 123; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		numb++;
	}
}
