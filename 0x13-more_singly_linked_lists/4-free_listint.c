#include "lists.h"
/**
  * free_listint - free list
  * @head: list to free
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->next);
		free(temp);
	}
}
