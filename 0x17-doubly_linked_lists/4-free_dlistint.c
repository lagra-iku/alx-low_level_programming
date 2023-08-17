#include "lists.h"

/**
 * free_dlistint - free DLL
 * @head: pointer to the head
 *
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
