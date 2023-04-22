#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - check code
 * @s: char - the operator to use on the function
 * Description: function to select the correct function
 * Return: interger - a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
