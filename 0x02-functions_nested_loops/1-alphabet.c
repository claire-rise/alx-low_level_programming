#include "main.h"
#include <ctype.h>
/**
 * print_alphabet - call the _putchar to print alphabet letter lower
 * @void: No Parameter declared
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		_putchar(letter);
	}
	_putchar('\n');
}
