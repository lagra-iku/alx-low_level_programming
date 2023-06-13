#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: row of 2d array
 * @height: height of 2d array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **_2darr;

	if (width <= 0 || height <= 0)
		return (NULL);
	_2darr = malloc(height * sizeof(int *));
	if (_2darr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		_2darr[i] = malloc(width * sizeof(int));
		if (_2darr[i] == NULL)
		{
			while (i >= 0)
			{
				free(_2darr[i]);
				i--;
			}
			free(_2darr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			_2darr[i][j] = 0;
	return (_2darr);
}
