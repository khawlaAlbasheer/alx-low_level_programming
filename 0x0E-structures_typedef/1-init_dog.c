#include "dog.h"
/**
 * init_dog - function to initialize a variable
 * @d: struct
 * @name: char
 * @age: int
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
