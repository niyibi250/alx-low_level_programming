#include "lists.h"
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print a given sentance
 * void:accept no argument
 * Return:nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

