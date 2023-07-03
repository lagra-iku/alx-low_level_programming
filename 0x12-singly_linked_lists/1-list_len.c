#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
* list_len - print linked list
* @h: structure
* Return: no of elements
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
		n++;
	return (n);
}
