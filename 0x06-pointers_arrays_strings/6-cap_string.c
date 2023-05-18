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
			continue;
		else if (_string[index] >= 'a' && _string[index] <= 'z')
			_string[index] -= 32;
		else
			continue;
	}
	return (_string);
}

