#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min num of coins to make change for an amount of money
 * @argc: count of arguments
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cent[] = {25, 10, 5, 2, 1};
	int i, num, count = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	} else if (argc < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (num >= cent[i])
		{
			count += (int)(num  / cent[i]);
			num = num % cent[i];
		}
		if (num == 0)
			break;
	}
	printf("%d\n", count);
	return (0);
}
