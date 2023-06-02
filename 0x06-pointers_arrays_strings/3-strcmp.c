#include "main.h"
/**
 * _strcmp - compele two sentence
 * @s1: first sentence
 * @s2:secand sentence
 * Return: 0 ,-1 and  1
 */
int _strcmp(char *s1, char *s2)
{
	int len1, len2;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (len1 == len2)
		return (len1 - len2);
	if (len1 < len2)
		return (len1 - len2);
	else
		return (len1 - len2);
}
