#include "_putchar.c"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: 0 on successs
 */
void print_alphabet_x10(void)
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 'a'; j <= 'z')
			_putchar(j);
		_putchar('\n');
	}
	_putchar('\n');
}
