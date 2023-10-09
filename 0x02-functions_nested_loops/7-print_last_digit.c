#include "main.h"

/**
 * print_last_digit - Function that prints and returns the last digit
 * @param: param is an int value argument of the function
 * Return: using _putchar function to print and return the last digit
 *
 */

int print_last_digit(int param)
{
	int result = param % 10;

	if (result < 0)
	{
		result = (result * -1);
	}
	_putchar('0' + result);
	return (result);
}
