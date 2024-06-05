#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds passed arguments
 * @a: argument 1
 * @b: argument 2
 * Return: sum of the integer arguments
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts passed arguments
 * @a: integer 1
 * @b: integer argument 2
 * Return: subtraction of passed arguments
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two passed integer arguments
 * @a: integer argument 1
 * @b: integer argument 2
 * Return: multiplication of passed integer arguments
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divided the passed integer arguments
 * @a: integer argument 1
 * @b: integer argument 2
 * Return: division of passed arguments
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of the division of the passed arguments
 * @a: integer argument 1
 * @b: integer argument 2
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

