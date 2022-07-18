#include "lists.h"
/**
  * add_nodeint_end - add new node at the ennd of list
  * @head: our current list
  * @n: data for new node
  * Return: pointer to the new list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
		temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	return (*head);
}
