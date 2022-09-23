#include "hash_tables.h"
/**
  * hash_table_print - print contents of a hash table in list format
  * @ht: hash table to print contents
  * Return: nothing
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int n, end = ht->size, i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (n = 0; n < end; n++)
	{
		temp = ht->array[n];
		while (temp != NULL)
		{
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			i = 1;
		}
	}
	printf("}\n");
}
