#include "main.h"
#include <ctype.h>

/**
 * print_alphabet_x10 - call _putchar to print alphabets 10 times
 * @void: No parameter declared
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			letter = tolower(letter);
			_putchar(letter);
		}

		_putchar('\n');
	}
}
