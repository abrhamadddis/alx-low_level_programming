#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize function for struct fog
 *
 * @d: pointer to dog sturct
 *
 * @name: char tye
 *
 * @age: float type
 *
 * @owner: char type
 *
 * return: return poiner to struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
