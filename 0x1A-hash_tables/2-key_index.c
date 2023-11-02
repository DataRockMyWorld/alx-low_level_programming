#include "hash_tables.h"
/**
 * key_index - Function that provides the index of a key
 * @key: string used to generate hash value
 * @size: size of the hash table
 * Return: The index of which key/value pair will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
