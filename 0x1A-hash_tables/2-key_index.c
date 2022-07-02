#include "hash_tables.h"
/**
 * key_index - c function to find the index of key
 * @key: pointer to a key
 * @size: size of an array of the hash table
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;

hash = hash_djb2(key) % size;
return (hash);
}
