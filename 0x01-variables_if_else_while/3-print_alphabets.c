#include <stdio.h>
/**
 * main - Fast entry
 *Return: 0 for success
 */
int main(void)
{
	int numb;

	for (numb = 65; numb < 91; numb++)
	{
		putchar(numb);
	}
	for (numb = 97; numb < 123; numb++)
	{
		putchar(numb);
	}
	putchar('\n');

	return (0); }
