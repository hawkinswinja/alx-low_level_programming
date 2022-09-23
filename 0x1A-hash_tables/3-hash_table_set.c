#include "hash_tables.h"
/**
  * hash_table_set - update hash table
  * @ht: hashtable to update
  * @key: key to update or add
  * @value: value of key
  * Return: 1 on Success 0 on failure
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp((ht->array[i])->key, key) == 0)
		{
			(ht->array[i])->value = strdup(value);
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
