#include "main.h"
/**
 * _islower - check lower letters
 * @c: parameter
 * Return: 1 for lower letters
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
