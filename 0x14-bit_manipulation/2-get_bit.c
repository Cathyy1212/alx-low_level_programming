#include "main.h"

/**
 * get_bit_at_index - returns the value of a bit at an index in a decimail
 * @number: number to search
 * @index: index of the bit
 *
 * Return: value of the bit at the given index, or -1 if the index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
        int r;
        unsigned int k = sizeof(n) * 8;

        if (index >= k)
                return (-1);
        r = n >> index & 1;
        return (r);
}
