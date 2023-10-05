#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Function to check for alphabet character
 * @c: c of type int is the argument of the function
 * Return: Return 1 if c is alphabet (lowercase or uppercase), else 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
