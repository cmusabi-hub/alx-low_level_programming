#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: value tested
 * @index: index to be changed
 * Retuns: value changed and 1 if it worked and -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (num << index);

	return (1);
}

