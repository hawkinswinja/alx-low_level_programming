#include "lists.h"
/**
  * list_len - print contents of a list
  * @h: list to print
  * Description: print data held in a list
  * Return: number of elements in the list
  */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
