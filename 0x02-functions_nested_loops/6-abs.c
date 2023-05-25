#include "main.h"
/**
 * _abs - Absolute of number
 * @c: local varible
 * Return: absolute of number
 */
int _abs(int c)
{
	int absol;

	if (c < 0)
	{
		absol = c * -1;
		return (absol);
	}
	else
	{
		return (c);
	}
}
