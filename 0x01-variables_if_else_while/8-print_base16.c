#include <stdio.h>
/**
 * main - Entry
 * Return: 0 success
 */
int main(void)
{
	int numb;

	for (numb = 48; numb < 58; numb++)
	{
		putchar(numb);
	}
	for (numb = 97; numb < 103; numb++)
	{
		putchar(numb);
	}
	putchar('\n');
	return (0);
}
