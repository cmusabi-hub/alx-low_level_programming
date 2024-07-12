#include "main.h"
/**
 * get_bit - returns value of a bit
 * @n: value tested
 * @index: index to be returned
 * Return: bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (index == 0)
		return (n & 1);
	else
		return (get_bit(n >> 1, index - 1));
}

