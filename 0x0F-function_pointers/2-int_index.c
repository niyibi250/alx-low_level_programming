#include "function_pointers.h"

/**
 *int_index - print index
 *@array:array of intiger
 *@size:size pf array
 *@cmp:function pointer
 *Return: return index of first non ziro
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, returned;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		(returned) = (*cmp)(array[i]);
		if (returned != 0)
		{
			return (i);
		}
		continue;

	}
	return (-1);
}

