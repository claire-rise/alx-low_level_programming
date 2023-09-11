#include <stdio.h>
/**
*main - Main function of my project
*
*
*Return: return always 0 (success)
*/
int main(void)
{
	fprintf(stderr, "Size of a char: %d byte(s)\n", sizeof(char));
	fprintf(stderr, "Sise of an int: %d byte(s)\n", sizeof(int));
	fprintf(stderr, "Size of a long int: %d byte(s)\n", sizeof(long int));
	fprintf(stderr, "Size of a long long int: %d byte(s)\n", sizeof(long long int));
	fprintf(stderr, "Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
