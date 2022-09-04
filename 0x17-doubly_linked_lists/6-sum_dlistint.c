#include "lists.h"
/**
  * sum_dlistint - sum n values of a list
  * @head: list to add n values
  * Return: sum of n
  */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
