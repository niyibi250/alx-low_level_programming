#include "main.h"
/**
 * _strcat - put two string together
 * @dest: first string
 * @src: appending string
 * Return: appended string
 */
char *_strcat(char *dest, char *src)
{
	int i, len1;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
