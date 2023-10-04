#include <ctype.h>

/**
 * _islower - takes param c and checks for lower case character
 * @c: c of type int is the argument of the function
 *
 * Return: return 1 if c is lowercase else return 0
 *
 */

int _islower(int c)
{
	if (isalpha(c))
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
