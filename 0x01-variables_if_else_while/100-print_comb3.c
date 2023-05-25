#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 seccess
 */
int main(void)
{
	int numbx;

	int numby;

	for (numbx = 48; numbx < 58; numbx++)
	{
		for (numby = 48; numby < 58; numby++)
		{
			if ((numbx != numby) && (numbx < numby))
			{
				putchar(numbx);
				putchar(numby);
				if (numbx < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
