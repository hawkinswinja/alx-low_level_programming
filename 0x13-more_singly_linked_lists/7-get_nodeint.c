#include "lists.h"
/**
  * get_nodeint_at_index - fetch node at index
  * @head: current list
  * @index: the node to fetch
  * Return: pointer of the fetched node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	if (!head)
		return (NULL);
	while (n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
