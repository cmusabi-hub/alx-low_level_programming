#include "3-calc.h"

/**
 * get_op_func - function pointer to the operator
 * @s: operator passed as argument
 * Return: operator
 * NULL if s does not match
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{"NULL", NULL},
	};
	int i;
}
