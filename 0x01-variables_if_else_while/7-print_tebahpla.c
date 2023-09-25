#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print alphabet letters in reverse order
 *
 * Return: return 0 always
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		letter = tolower(letter);
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
