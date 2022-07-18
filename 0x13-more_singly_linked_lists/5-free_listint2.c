#include "lists.h"
/**
  * free_listint2 - free list
  * @head: list to free
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
