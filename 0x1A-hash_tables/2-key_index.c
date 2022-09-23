#include "hash_tables.h"
/**
  * key_index - return index position of a key
  * @key: string to store at index
  * @size: capacity of hash table
  * Return: index position of key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
