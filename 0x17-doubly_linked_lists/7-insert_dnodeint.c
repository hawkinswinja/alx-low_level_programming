#include "lists.h"
/**
  * insert_dnodeint_at_index - insert node at index
  * @h: list
  * @idx:position
  * @n: node data to insert
  * Return: node at index
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *next;
	dlistint_t *bfr;

	while (temp != NULL)
	{
		if (i == idx)
		{
			bfr = temp->prev;
			next = add_dnodeint(&temp, n);
			bfr->next = next;
			return (*h);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
