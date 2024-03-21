#include <stdio.h>

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}

