#include "hash_tables.h"

int main()
{
    hash_table_t *ht = hash_table_create(1024);
    if (ht == NULL)
    {
        fprintf(stderr, "Failed to create hash table\n");
        return 1;
    }

    if (hash_table_set(ht, "name", "John"))
        printf("Added 'name' to the hash table\n");
    else
        printf("Failed to add 'name'\n");

    if (hash_table_set(ht, "age", "30"))
        printf("Added 'age' to the hash table\n");
    else
        printf("Failed to add 'age'\n");

    return 0;
}
