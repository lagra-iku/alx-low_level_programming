#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - func that does calculations on a and b
 * @argc: The number of arguments to main
 * @argv: array of pointers to the arguments
 * Return: calc results
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
