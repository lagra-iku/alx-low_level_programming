#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - a func that deletes the head node of a linked list
* @head: head of list
* Return: void
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
