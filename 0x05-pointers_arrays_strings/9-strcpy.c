#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: copy to
 * @src: copy from
 * Return: return copyied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++];
	return (dest);
}
