#include "hash_tables.h"

/**
 * set_hash_table - Add or update an element in a hash table.
 * @table: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int set_hash_table(hash_table_t *table, const char *key, const char *value)
{
    hash_node_t *new_node;
    char *value_copy;
    unsigned long int index, i;

    if (table == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = get_key_index((const unsigned char *)key, table->size);
    for (i = index; table->array[i]; i++)
    {
        if (strcmp(table->array[i]->key, key) == 0)
        {
            free(table->array[i]->value);
            table->array[i]->value = value_copy;
            return (1);
        }
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(value_copy);
        return (0);
    }

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = value_copy;
    new_node->next = table->array[index];
    table->array[index] = new_node;

    return (1);
}
