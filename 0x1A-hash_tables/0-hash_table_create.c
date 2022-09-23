#include "hash_tables.h"
/**
  * hash_table_create - fucntion to create a hash table
  * @size: length of the array of pointers
  * Return: pointer to the hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	unsigned int n = 0;

	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
		return (NULL);

	while (n < size)
	{
		new->array[n] = NULL;
		n++;
	}
	return (new);
}
