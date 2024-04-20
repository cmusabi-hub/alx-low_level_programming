#include "main.h"

/**
 * leet - encodes a string into 1337
 * @string: string to be encoded
 * Return: encoded string;
 */
char *leet(char *string)
{
	int index, arr_iter, num_arr[5] = {'4', '3', '0', '7', '1'};
	char *char_ptr = string, char_arr[5] = {'a', 'e', 'o', 't', 'l'};

	for (index = 0; char_ptr[index] != '\0'; index++)
	{
		for (arr_iter = 0; arr_iter < 5; arr_iter++)
		{
			if (char_ptr[index] == char_arr[arr_iter] || char_ptr[index] == (char_arr[arr_iter] - 32))
			{
				char_ptr[index] = num_arr[arr_iter];
				break;
			}
		}
	}
	return (string);
}

