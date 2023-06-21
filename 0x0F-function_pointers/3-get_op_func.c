#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - the func that selects the correct func to perform the opn
  * @s: operator passed as argument to the program
  * Return:a pointer to the func that corresponds to the operator
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int i;

	for (i = 0; ops[i].op != NULL && *(ops[i].op) != *s; i++)
	{
	}
	return (ops[i].f);
}
