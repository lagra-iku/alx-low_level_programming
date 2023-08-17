#include "lists.h"

/**
 * sum_dlistint - sum of all data in DLL
 * @head: pointer to the head
 *
 * Return: 0 if empty else sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

