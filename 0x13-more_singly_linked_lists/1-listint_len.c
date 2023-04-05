#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
* listint_len - func that returns the no of elements in a linked list.
* @h: structure
* Return: the no of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
		n++;
	return (n);
}
