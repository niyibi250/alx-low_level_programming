#include <stdio.h>
/**
 * main - Entry point
 *Return: 0 seccess
 */
int main(void)
{
	int numb = 48;

	while (numb < 58)
	{
		if (numb < 57)
		{
			putchar(numb);
			putchar(';');
			putchar(' ');
		}
		else
		{
			putchar(numb);
		}
		numb++;
	}
	return (0);
}
