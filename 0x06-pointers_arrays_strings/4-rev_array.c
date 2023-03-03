#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array
 * @n: array size
 * Return: 0
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	n -= 1;
	for (i = 0; i <= n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
