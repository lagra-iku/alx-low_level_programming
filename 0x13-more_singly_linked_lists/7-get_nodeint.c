#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of a linked list
* @index: is the index of the node, starting at 0
* @head: head of list
* Return: returns the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
