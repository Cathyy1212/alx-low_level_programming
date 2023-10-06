#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

hash_table_t *create_hash_table(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int get_key_index(const unsigned char *key, unsigned long int size);
int set_hash_table(hash_table_t *ht, const char *key, const char *value);
char *get_value_from_hash_table(const hash_table_t *ht, const char *key);
void print_hash_table(const hash_table_t *ht);
void delete_hash_table(hash_table_t *ht);

typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

shash_table_t *create_sorted_hash_table(unsigned long int size);
int set_sorted_hash_table(shash_table_t *sht, const char *key, const char *value);
char *get_value_from_sorted_hash_table(const shash_table_t *sht, const char *key);
void print_sorted_hash_table(const shash_table_t *sht);
void print_sorted_hash_table_reverse(const shash_table_t *sht);
void delete_sorted_hash_table(shash_table_t *sht);

#endif /* HASH_TABLES_H */
