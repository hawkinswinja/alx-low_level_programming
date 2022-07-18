#include "lists.h"
/**
  * insert_nodeint_at_index - add node at the given index
  * @head: our current list
  * @idx: position to add new node
  * @n: data to add to list
  * Return: pointer to the new list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	listint_t *bfr;

	if (!node)
		return (NULL);
	while (i < idx)
	{
		bfr = temp;
		temp = temp->next;
		i++;
	}
	node->n = n;
	node->next = bfr->next;
	bfr->next = node;
	return (*head);
}
