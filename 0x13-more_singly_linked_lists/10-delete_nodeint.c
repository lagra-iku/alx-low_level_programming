#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index -  func that deletes the node at index of a list.
* @head: head of list
* @index: is the index that should be deleted
* Return: 1 for success and -1 for fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *temp;
  unsigned int i;

  temp = *head;
  if (head == NULL || *head == NULL)
    return (-1);
  if (index == 0)
  {
    *head = (*head)->next;
    free(temp);
    return (1);
  }
  if (index > 0)
  {
    for (i = 0; i < index - 1; i++)
    {
      if (temp->next != NULL)
      {
        temp = temp->next;
      }
      if (temp == NULL)
        return (-1);
    }
  }
  temp->next = temp->next->next;
  free(temp);
  return (1);
}
