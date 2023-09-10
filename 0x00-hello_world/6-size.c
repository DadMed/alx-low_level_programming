#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various type.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %ul byte(s)\n", sizeof(char));
	printf("Size of an int: %ul byte(s)\n", sizeof(int));
	printf("Size of a long int: %ul byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ul byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ul byte(s)\n", sizeof(float));
	return (0);
}
