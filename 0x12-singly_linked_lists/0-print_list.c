#include "lists.h"
/**
  * print_list - print contents of a list
  * @h: list to print
  * Description: print data held in a list
  * Return: number of elements in the list
  */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
