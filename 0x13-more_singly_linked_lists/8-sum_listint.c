#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - a func that returns sum of all the data(n) of a linked list.
* @head: head of list
* Return: returns the sum of all the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
