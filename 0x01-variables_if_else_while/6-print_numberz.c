#include<stdio.h>
#include<stdlib.h>
/**
 * main-print numbers < 10
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
