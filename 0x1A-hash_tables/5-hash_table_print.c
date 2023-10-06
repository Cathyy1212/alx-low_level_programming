#include "hash_tables.h"

/**
 * print_hash_table - Prints a hash table.
 * @table: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void print_hash_table(const hash_table_t *table)
{
    hash_node_t *current_node;
    unsigned long int index;
    unsigned char comma_flag = 0;

    if (table == NULL)
        return;

    printf("{");
    for (index = 0; index < table->size; index++)
    {
        if (table->array[index] != NULL)
        {
            if (comma_flag == 1)
                printf(", ");

            current_node = table->array[index];
            while (current_node != NULL)
            {
                printf("'%s': '%s'", current_node->key, current_node->value);
                current_node = current_node->next;
                if (current_node != NULL)
                    printf(", ");
            }
            comma_flag = 1;
        }
    }
    printf("}\n");
}
