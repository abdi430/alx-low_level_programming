#include "_putchar.c"
#include "main.c"
/**
 * print_alphabet - prints alphabets in lower case
 * Return: 0 on success
 */
void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
