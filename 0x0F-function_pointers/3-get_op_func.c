#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - selects correct function
 * @s: operator passed as argument to the program
 * Return: function to be selected or NULL if sign not found
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
    int i = 0;

    while (ops[i].op != NULL)
    {
	    if (strcmp(s, ops[i].op) == 0)
		    break;
	    i++;
    }
    return (ops[i].f);
}

