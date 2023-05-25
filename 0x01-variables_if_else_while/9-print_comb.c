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
		putchar(numb);
		putchar(',');
		putchar(' ');
		numb++;
	}
	return (0);
}
