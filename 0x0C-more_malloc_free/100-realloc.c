#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 * Return: pointer to a new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newpointer;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	newpointer = malloc(new_size);
	if (newpointer == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	for (i = 0; i < old_size && i < new_size; i++)
		newpointer[i] = ptr[i];
	free(ptr);
	return (newpointer);
}
