#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * return: returns 0
 */
int main(void)
{
	int n, _mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	_mod = n % 10;
	if ((_mod < 6) && (_mod != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, _mod);
	else if (_mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, _mod);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, _mod);

	return (0);
}

