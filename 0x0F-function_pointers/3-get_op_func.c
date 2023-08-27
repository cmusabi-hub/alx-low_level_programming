#include "3-calc.h"

/**
 * get_op_func - selects correct function
 * @s: character operator passed by the user
 * Return - function to perform the operation asked
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

	 for (; ops[i].op; i++)
	 {
		 if (*(ops[i].op) == *s && !*(s + 1))
			 break;
	 }
	 return (ops[i].f);
}

