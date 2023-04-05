#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end -  a function that adds a new node at the end of a list.
* @head: head
* @n: element
* Return: address of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode =  malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
