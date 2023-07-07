#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate space in memory
 * @b: size
 * Return:allocated memory.
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
