#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print digits numbers 0 to 9 using putchar
 *
 * Return: return 0 always
 */
int main(void)
{
	int digitNum;

	for (digitNum = 0; digitNum <= 9; digitNum++)
	{
		putchar(digitNum.tostring());
	}

	putchar('\n');
	return (0);
}
