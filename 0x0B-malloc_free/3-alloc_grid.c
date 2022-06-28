#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - allocate grid
  * @width: width of the grid
  * @height: height of the grid
  * Return: pointer to the grid
  */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	j = width * height;
	if (j == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * (j));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
