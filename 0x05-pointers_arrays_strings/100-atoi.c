#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: string
 */
int _atoi(char *s)
{
    int index = 0, result = 0, sign = 1, digit;

    /**
     *  Skip leading spaces
     */
    while (s[index] && s[index] == ' ')
    {
        index++;
    }

    /**
     * Check for sign
     */
    if (s[index] == '+' || s[index] == '-')
    {
        sign = (s[index] == '+') ? 1 : -1;
        index++;
    }

    while (s[index] && s[index] >= '0' && s[index] <= '9')
    {
        digit = s[index] - '0';
        /**
	 *  Checking for overflow before multiplication
	 */
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = (result * 10) + digit;
        index++;
    }

    return (result * sign);
}

