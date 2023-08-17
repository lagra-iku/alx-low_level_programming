/**
 * print_dlistint - a func that prints all the elements of a dlist
 * @h: pointer to the head
 * Return: num of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
