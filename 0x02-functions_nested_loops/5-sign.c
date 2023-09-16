#include "main.h"
/**
 * print_sign - prints sign of a number
 * Return: 1 if > 0, 0 if 0, and -1 if < 0
 * @n: number t be checked
 */
int print_sign(int n)
{
	int s;

	if (n > 0)
	{
		s = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		s = -1;
		_putchar('-');
	}
	else
	{
		s = 0;
		_putchar('0');
	}
	return (s);
}
