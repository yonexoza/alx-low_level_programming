
#include "main.h"

/**
 * print_rev - reverse string
 * @s: character pointer
 */

void print_rev(char *s)
{
	int i;
	int j;

	len = _strlen(s);
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - length of the string
 * @s: string
 * Return: counter
 */

int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
