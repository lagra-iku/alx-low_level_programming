#include <stdio.h>
/**
 * main - function to print the number of arguments
 * @argc: arguments
 * @argv: array pointing to argument argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
