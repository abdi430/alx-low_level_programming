#include<stdio.h>
/**
 * main-prints alphabets
 * Return: always 0 (Success)
 */
int main(void)
{
	char alpa;

	for (alpa = 'a'; alpa <= 'z'; alpa++)
	{
		putchar(alpa);
	}
	putchar('\n');
	return (0);
}
