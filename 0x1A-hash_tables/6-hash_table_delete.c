#include "hash_tables.h"
/**
  * hash_table_delete - delete a hash table
  * @ht: hash table to delete
  * Return: nothing
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int n = 0;
	hash_node_t *temp, *nxt;
	hash_table_t *ht1 = ht;

	while (n < ht->size)
	{
		temp = ht->array[n];
		while (temp)
		{
			nxt = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = nxt;
		}
		n++;
	}
	free(ht1->array);
	free(ht1);
}
