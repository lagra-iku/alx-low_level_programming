#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint - a function that adds a new node at the beginning of a list.
* @head: first node
* @n: element
* Return: no of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead =  malloc(sizeof(listint_t));

	if (!newhead)
		return (NULL);
	newhead->n = n;
	newhead->next = (*head);
	(*head) = newhead;
	return (*head);
}
