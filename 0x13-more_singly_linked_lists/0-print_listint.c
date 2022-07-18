#include "lists.h"
/**
  * print_listint - print contents of a list
  * @h: linked list to print
  * Return: elemnts in the list
  */
size_t print_listint(const listint_t *h)
{

	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
