#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print all possible combinations of 2 2 digit num
 *
 * Return: return 0 always
 */
int main(void)
{
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit <= 98; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 99; secondDigit++)
		{
			putchar((firstDigit / 10) + '0');
			putchar((firstDigit % 10) + '0');
			putchar(' ');
			putchar((secondDigit / 10) + '0');
			putchar((secondDigit % 10) + '0');
			if ((firstDigit % 10) != 8 || (firstDigit / 10) != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
