#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table
 * Return: 0
 */

void hash_table_print(const hash_table_t *ht)
{
	int first_entry = 1;
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first_entry)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_entry = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
