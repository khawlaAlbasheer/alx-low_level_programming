#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: pointer to the struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
