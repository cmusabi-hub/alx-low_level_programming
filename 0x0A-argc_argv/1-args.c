#include "main.h"
#include <stdio.h>

/**
 * .
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, j = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%d",j++);
	}
	return (0);
}

