#include <stdio.h>

/**
 * main - main function
 * Return: returns 0 on success
 */

int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

