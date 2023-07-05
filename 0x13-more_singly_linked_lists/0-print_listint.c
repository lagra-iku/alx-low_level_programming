#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
* print_listint - print linked list
* @h: structure
* Return: no of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nodes++;
	}
	return (nodes);
}
