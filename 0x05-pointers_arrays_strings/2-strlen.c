#include "main.h"
/*
 * _strlen - returns str length
 * @s: pointer to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while(s[len] != '\0')
		len++;
	return (len);
}
