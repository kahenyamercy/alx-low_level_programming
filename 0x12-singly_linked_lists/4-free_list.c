#include "lists.h"
/**
 * free_list - frees the list
 * @head: head of the link list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
