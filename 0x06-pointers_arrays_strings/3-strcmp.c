#include "main.h"
/**
 * _strcmp - compele two sentence
 * @s1: first sentence
 * @s2:secand sentence
 * Return: 0 ,-1 and  1
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
