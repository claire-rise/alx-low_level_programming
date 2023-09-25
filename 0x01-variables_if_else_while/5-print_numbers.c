#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to display digits from 0 to 9
 *
 * Return: return 0 always
 */
int main(void)
{
	int digitNum;

	for (digitNum = 0; digitNum <= 9; digitNum++)
	{
		putchar(digitNum);
	}

	putchar('\n');
	return (0);
}
