#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - func that inserts a new node at a given position.
* @head: head of list
* @idx: is the index of the list where the new node should be added.
* @n: value to add
* Return: returns the address of the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp;
	unsigned int i;

	if (head == NULL || newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else if (idx > 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
