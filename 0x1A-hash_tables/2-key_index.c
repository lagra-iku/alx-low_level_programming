#include "hash_tables.h"

/**
 * key_index - a funct that gives you the index of a key
 * @key: is the key
 * @size: the size of the array of the hash table
 * Return: index where key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
