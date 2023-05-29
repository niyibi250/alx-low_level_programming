#include "main.h"
/**
 * swap_int - This swap two numbers
 * @a: this is first number
 * @b: this secand number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}



