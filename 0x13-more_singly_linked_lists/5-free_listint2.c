#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list.
* @head: head of list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
