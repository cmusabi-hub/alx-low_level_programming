#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects correct function to perform required operation
 * @s: pointer to the character
 * Return: result of the final operation
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
    i = 0;

    while (ops[i] != NULL)
    {
	    if (ops[i].op == s)
		    return (ops[i].f);
	    i++;
    }
    return (NULL);
}

