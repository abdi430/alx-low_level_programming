#include "main.h"
/**
 * _isalpha - checks if alphabet or not
 * @c: char to be checked
 * Return: 1 if alphabet, 0 if not
 */
int _isalpha(int c)
{
	int i, j;
	int a = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
				a = 1;
		}
	}
	return (a);
}
