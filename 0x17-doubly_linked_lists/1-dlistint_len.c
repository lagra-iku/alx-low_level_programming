#include "lists.h"

/**
 * dlistint_len - func that returns no of elements in DLL
 * @h: pointer to the head
 *
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
