#include "main.h"
/**
 * rev_string - revarse string
 * @s: string to revarse
 */
void rev_string(char *s)
{
	int i, x, temp;

	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	len = len + i;
	for (x = 0; x < (len / 2); x++)
	{
		temp = s[x];
		s[x] = s[len - 1 - x];
		s[len - 1 - x] = temp;
	}
}
