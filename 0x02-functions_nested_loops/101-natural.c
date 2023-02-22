#include <stdio.h>>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((1 % 3 == 0) || (i % 5 == 0))
		{
			printf("%d", sum += i);
		}
	}
	return (0);
}
