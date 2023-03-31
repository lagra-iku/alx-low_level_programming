#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
* print_list - print linked list
* @h: structure
* Return: length of node
*/
size_t print_list(const list_t *h)
{
	size_t length = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		length++;
	}
	return (length);
}
