#include "main.h"
#include <ctype.h>

/**
 * print_sign - Function to check for character input n
 * @n: n of type int is the argument of the function
 * Return: return 1 and prints '+' if n is greater than zero
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints '-' if n is less than zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
