#include "main.h"
/**
 * _abs - Absolute of number
 * @numb: local varible
 * Return: absolute of number
 */
int _abs(int numb)
{
	int numb;

	if (numb < 0)
	{
		return (numb * -1);
	}
	else
	{
		return (numb);
	}
}
