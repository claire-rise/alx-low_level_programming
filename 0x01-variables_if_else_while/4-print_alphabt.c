#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print alphabets exluding letter e and q
 *
 * Return: return 0 always
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			letter = tolower(letter);
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
