#include<stdio.h>
#include<stdlib.h>
/**
 * main-print alphabets in small and capital
 * return: always 0 (Success)
 */
int main(void)
{
	char all;

	for (all = 'a'; all <= 'z'; all++)
	{
		putchar(all);
	}
	for (all = 'A'; all <= 'Z'; all++)
	{
		putchar(all);
	}
	putchar('\n');
	return (0);
}
