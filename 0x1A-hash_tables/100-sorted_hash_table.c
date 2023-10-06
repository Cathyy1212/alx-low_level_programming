void print_sorted_hash_table(const shash_table_t *sht)
{
    shash_node_t *n;

    if (sht == NULL)
        return;

    n = sht->shead;
    printf("{");
    while (n != NULL)
    {
        printf("'%s': '%s'", n->key, n->value);
        n = n->snext;
        if (n != NULL)
            printf(", ");
    }
    printf("}\n");
}

void print_sorted_hash_table_reverse(const shash_table_t *sht)
{
    shash_node_t *n;

    if (sht == NULL)
        return;

    n = sht->stail;
    printf("{");
    while (n != NULL)
    {
        printf("'%s': '%s'", n->key, n->value);
        n = n->sprev;
        if (n != NULL)
            printf(", ");
    }
    printf("}\n");
}

void delete_sorted_hash_table(shash_table_t *sht)
{
    shash_table_t *head = sht;
    shash_node_t *n, *tmp;

    if (sht == NULL)
        return;

    n = sht->shead;
    while (n)
    {
        tmp = n->snext;
        free(n->key);
        free(n->value);
        free(n);
        n = tmp;
    }

    free(head->array);
    free(head);
}
