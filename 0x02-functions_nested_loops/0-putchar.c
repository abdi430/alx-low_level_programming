#include "_putchar.c"
/**
 * main-print _putchar
 * Return: on success 1
 */
int main(void)
{
	char word[8] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
