#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog struct
 * 
 * @d:variable d
 */
void print_dog(struct dog *d)
{
	d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
	printf("Age: %f\n", d->age);
	d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));

}

