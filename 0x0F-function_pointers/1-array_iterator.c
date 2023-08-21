#include "function_pointers.h"
/**
 *array_iterator - print arrey
 *@size: size of arrey
 *@action:function pointer
 *@array:arrey to iterate
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

