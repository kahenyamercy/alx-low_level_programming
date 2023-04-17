#include "dog.h"
#include <stddef.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: pointer to name of the dog
 * @age: float number of age of the dog
 * @owner: pointer to owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
