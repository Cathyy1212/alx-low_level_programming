#include "main.h"

/**
 * determine_endianness - checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int determine_endianness(void)
{
	unsigned int value = 1;
	char *byte_representation = (char *)&value;

	return (byte_representation[0]);
}
