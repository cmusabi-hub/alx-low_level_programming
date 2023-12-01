#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Letter to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			return (1);
	}
	return (0);
}

