#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @string: string to be capitalized
 * Return
 */
char *cap_string(char *string)
{
	char *char_ptr = string, sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int index, sep_index;

	for (index = 0; char_ptr[index] != '\0'; index++)
	{
		if (index == 0 && (char_ptr[index] >= 'a' && char_ptr[index] <= 'z'))
			char_ptr[index] -= 32;
		for (sep_index = 0; sep[sep_index] != '\0'; sep_index++)
		{
			if (char_ptr[index] == sep[sep_index])
			{
				if (char_ptr[index + 1] >= 'a' && char_ptr[index + 1] <= 'z')
					char_ptr[index + 1] -= 32;
			}
		}
	}
	return (string);
}

