#include "lists.h"

/**
 * *get_dnodeint_at_index- func that returns nth node odf DLL
 * @head: pointer to the head
 * @index: index of the node
 *
 * Return: nth node of DLL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;

		if (current == NULL || index > 0)
			return (NULL);
		return (current);
	}
}
