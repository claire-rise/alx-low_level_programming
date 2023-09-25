#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print numbers of base 16 followed by new line
 *
 * Return: return 0 always
 */
int main(void)
{
	int num;
	int letter;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
