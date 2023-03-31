#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_list -a function that frees a list_t list.
* @head: a first node
* Return: no of nodes
*/
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head;
		head = head->next
		free(new);
	}
}
