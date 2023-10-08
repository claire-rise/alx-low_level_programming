#include "main.h"
#include <ctype.h>


/**
 * _abs - Function check argument to determine the absolute value
 * @param: param is an int literal as argument of the function
 * Return: returns unsigned int value of input
 */


int _abs(int param)
{
	if (param <= 0)
	{
		return (-1 * param);
	}
	else
	{
		return (param);
	}
}
