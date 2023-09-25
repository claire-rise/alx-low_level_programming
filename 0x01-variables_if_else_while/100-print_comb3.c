#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print all possible combinations of two digits
 *
 * Return: return 0 always
 */
int main(void)
{
	int firstDigit;
	int secondDigit;

	for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)
	{
		for (secondDigit = '1'; secondDigit <= '9'; secondDigit++)
		{
			if (firstDigit < secondDigit)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				
				if (firstDigit < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
