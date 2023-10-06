#include "hash_tables.h"

/**
 * custom_hash_djb2 - Custom hash function implementing the djb2 algorithm.
 * @input_string: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int custom_hash_djb2(const unsigned char *input_string)
{
    unsigned long int hash_value;
    int character;

    hash_value = 5381;
    while ((character = *input_string++))
        hash_value = ((hash_value << 5) + hash_value) + character; /* hash * 33 + c */

    return (hash_value);
}
