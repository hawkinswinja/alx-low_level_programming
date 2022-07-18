#include "lists.h"
/**
  * add_nodeint - add node at the beginning of a list
  * @head: pointer to the first node
  * @n: data n for new node
  * Return: pointer to the new list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
