#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning of a list_t list.
* @head: afirst node
* @str: str to add
* Return: no of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead =  malloc(sizeof(list_t));
	int len = 0;

	while (str[len])
		len++;
	if (!newhead)
		return (NULL);
	newhead->str = strdup(str);
	newhead->len = len;
	newhead->next = (*head);
	(*head) = newhead;
	return (*head);
}
