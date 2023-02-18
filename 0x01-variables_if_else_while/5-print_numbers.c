#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all single digits of base 10 starting from 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
