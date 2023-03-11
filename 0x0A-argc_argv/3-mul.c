#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: count of arguments
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, prod;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	return (0);
}
