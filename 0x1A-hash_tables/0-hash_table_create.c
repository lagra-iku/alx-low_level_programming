#include "hash_tables.h"

/**
 * hash_table_create - a func that creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	hash_node_t **items;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	items = (hash_node_t **) malloc(size * sizeof(hash_node_t *));

	if (items == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		items[i] = NULL;
	table->size = size;
	table->array = items;

	return (table);
}
