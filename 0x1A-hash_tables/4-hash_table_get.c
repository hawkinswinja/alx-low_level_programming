#include "hash_tables.h"
/**
  * hash_table_get - retrieve value from ht
  * @ht: hash table to search value using key
  * @key: key associated with value
  * Return: value of the key
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);
	if (strcmp((ht->array[index])->key, key) == 0)
		return ((ht->array[index])->value);
	temp = (ht->array[index])->next;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
