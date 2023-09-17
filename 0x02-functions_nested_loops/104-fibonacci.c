#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fibonacci[50], max = 0;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i <= 90; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
			printf("%d\n", fibonacci[i]);
	}

	return (0);
}
