#include "main.h"

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int num;
	char name[] = "_putchar";

	for (num = 0; name[num] != '\0'; num++)
	{
		_putchar(name[num]);
	}
	_putchar('\n');
	return (0);
}

