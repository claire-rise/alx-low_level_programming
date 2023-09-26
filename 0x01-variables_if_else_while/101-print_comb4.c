#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print all possible combinations of 3 digits
 *
 * Return: return 0 always
 */
int main(void)
{
	int firstDigit;
	int secondDigit;
	int thirdDigit;

	for (firstDigit = '0'; firstDigit <= '7'; firstDigit++)
	{
		for (secondDigit = '1'; secondDigit <= '8'; secondDigit++)
		{
			for (thirdDigit = '2'; thirdDigit <= '9'; thirdDigit++)
			{
				if (firstDigit < secondDigit && secondDigit < thirdDigit)
				{
					putchar(firstDigit);
					putchar(secondDigit);
					putchar(thirdDigit);
					if (firstDigit < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return 0;
}
