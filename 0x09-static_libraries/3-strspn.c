#include "main.h"
/**
 * _st:number of character
 * @s:string
 * @accept:character to count
 * Return:number of character
 */
unsigned int _strspn(char *s, char *accept)
{
	int len, i, y;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (accept[y] == s[i])
				len++;
		}
	}
	return (len);
}
