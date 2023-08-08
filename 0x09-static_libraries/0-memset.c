#include "main.h"
/**
 * _memset - print n times
 * @n:number to pe printed
 * @b:to be placed
 * @s:pointed
 * Return: return arrey s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}
	return (s);
}
