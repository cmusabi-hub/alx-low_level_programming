#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory using malloc
 * @nmemb: elements
 * @size: size of each bytes
 * Returns: pointer to allocated memory or NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	arr = malloc(sizeof(size) * nmemb);

	if (arr == NULL)
		return (NULL);
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	if (arr != NULL)
		memset(arr, 0, nmemb);
	return (arr);
}

