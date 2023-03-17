#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min int
 * @max: max int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);
	for (j = 0; j < (max - min); j++)
	{
	}
	arr = malloc(sizeof(int) * (j + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
		arr[i] = min++;
	return (arr);
}
