#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sum numbers.
 * @argc: count of arguments
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
