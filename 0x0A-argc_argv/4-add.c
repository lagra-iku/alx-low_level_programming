#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: count of arguments
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
