#include "main.h"
/**
 * _strncat - cut n character
 * @dest:destination
 * @src: source string
 * @n:character to cut
 * Return: full string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i >= n)
			break;
		dest[len1 + i] = src[i];
	}
	return (dest);
}

