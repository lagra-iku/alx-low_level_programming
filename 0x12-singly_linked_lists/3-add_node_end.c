#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - a function that adds a new node at the end of a list_t list.
* @head: afirst node
* @str: str to add
* Return: no of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newhead =  malloc(sizeof(list_t));
	list_t *temp = *head;
	int len = 0;

	while (str[len])
		len++;
	if (!newhead)
		return (NULL);
	newhead->str = strdup(str);
	newhead->len = len;
	newhead->next = NULL;
	if (*head == NULL)
	{
		*head = newhead;
		return (newhead);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newhead;
	return (newhead);
}
