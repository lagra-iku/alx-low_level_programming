#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of arguments
 * Return: 1 or 2 depending on success
 */
int main(int argc, char **argv)
{
	int num, i;
	char *str = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num; i++)
	{
		printf("%.2hhx", str[i]);
		if (i < num - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
