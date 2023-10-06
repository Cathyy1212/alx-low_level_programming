#include "hash_tables.h"

/**
 * retrieve_value - Retrieve the value associated with
 *                  a key in a hash table.
 * @table: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in table.
 */
char *retrieve_value(const hash_table_t *table, const char *key)
{
    hash_node_t *node;
    unsigned long int index;

    if (table == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = get_key_index((const unsigned char *)key, table->size);
    if (index >= table->size)
        return (NULL);

    node = table->array[index];
    while (node && strcmp(node->key, key) != 0)
        node = node->next;

    return ((node == NULL) ? NULL : node->value);
}
