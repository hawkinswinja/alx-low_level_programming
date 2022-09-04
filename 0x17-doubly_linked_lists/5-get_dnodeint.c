#include "lists.h"
/**
  * get_dnodeint_at_index - return node at the index
  * @head: list
  * @index:position
  * Return: node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (n == index)
			return (temp);
		temp = temp->next;
		n++;
	}
	return (NULL);
}
