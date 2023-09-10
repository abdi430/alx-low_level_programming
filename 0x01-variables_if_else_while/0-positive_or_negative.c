#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main-displays random number
 * return: always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("n:%d is zero\n", n);
	}
	else
	{
		printf("n:%d is negative\n", n);
	}
	return (0);
}
