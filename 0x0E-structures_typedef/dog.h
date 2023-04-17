#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct representing information about a dog
 * @name: A pointer to the dog's name
 * @age: dog's age
 * @owner: A pointer to owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
