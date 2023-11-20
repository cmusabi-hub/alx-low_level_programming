#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha++;
			continue;
		}
		else
			putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}

