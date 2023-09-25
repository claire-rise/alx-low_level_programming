#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print alphABET in that sequence followed by new line
 *
 * Return: return 0 always
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		letter = toupper(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
