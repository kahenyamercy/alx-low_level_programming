#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: poointer to dogs
 * Return: none
 */
void free_dog(dog_t *d)
{
	free(d);
}
