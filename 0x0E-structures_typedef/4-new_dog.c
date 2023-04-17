#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name :name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namecopy;
	char *ownercopy;
	int namelen = 0;
	int ownerlen = 0;
	int i;
	/*finds the length of the strings*/
	while (name[namelen])
		namelen++;
	while (owner[ownerlen])
		ownerlen++;
	/*allocates memory to pointer to newdog*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	/*allocates memory to namecopy*/
	namecopy = malloc(sizeof(char) * (namelen + 1));
	if (namecopy == NULL)
	{
		free(newdog);
		return (NULL);
	}
	/*allocates memory to ownercopy*/
	ownercopy = malloc(sizeof(char) * (ownerlen + 1));
	if (ownercopy == NULL)
	{
		free(newdog);
		free(namecopy);
		return (NULL);
	}
	/* Copy the name and owner strings */
	for (i = 0; i <= namelen; i++)
		namecopy[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		ownercopy[i] = owner[i];
	/*Set the fields of the new dog*/
	newdog->name = namecopy;
	newdog->age = age;
	newdog->owner = ownercopy;
	return (newdog);
}
