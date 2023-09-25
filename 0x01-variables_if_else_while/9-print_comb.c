#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print possible combinations of single digits
 *
 * Return: return 0 always
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
