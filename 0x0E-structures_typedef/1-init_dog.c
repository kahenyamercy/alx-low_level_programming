#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: pointer to name of type character
 * @age: float number of age
 * @owner: pointer to owner of type character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
