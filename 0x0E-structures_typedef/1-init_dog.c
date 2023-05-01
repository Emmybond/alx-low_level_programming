#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - It implies initialize a variable of type struct dog
 * @d: It represents pointer to struct dog to initialize
 * @name: It represents name to initialize
 * @age: It represents age to initialize
 * @owner: It represents owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

