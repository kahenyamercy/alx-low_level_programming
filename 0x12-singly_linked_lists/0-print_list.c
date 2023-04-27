#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d]%s\n", 0, "(nil)");
		else
			printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
