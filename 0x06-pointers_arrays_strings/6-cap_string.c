#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @_string: string coverted
 * Return: return the changed _string
 */

char *cap_string(char *_string)
{
	int index;
	char separator[] = ",; .!?\n\t\"(){}";

	for (index = 0; _string[index] != '\0'; index++)
	{
		if (_string[index] == separator[index])
		{
			if (_string[index + 1] >= 'a' && _string[index + 1] <= 'z')
				_string[index + 1] -= 32;
		}
	}
		
	return (_string);
}

