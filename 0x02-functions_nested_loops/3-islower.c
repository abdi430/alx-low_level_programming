#include "main.h"
/**
 * _islower - check if char is lower
 * Return: 1 if lower, and 0 if not
 */
int _islower(int c)
{
	char i;
	int l = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			l = 1;
	}
	return (l);
}
