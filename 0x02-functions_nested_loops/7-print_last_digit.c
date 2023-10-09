#include "main.h"

/**
 * print_last_digit - Function that prints and returns the last digit
 * @param: param is an int value argument of the function
 * Return: using _putchar function to print and return the last digit
 *
 */

int print_last_digit(int param)
{
	int result;

	if (param < 0)
	{
		result = ((param * -1) % 10);
	}
	else
	{
		result = (param % 10);
	}
	_putchar('0' + result);
	return (result);
}
