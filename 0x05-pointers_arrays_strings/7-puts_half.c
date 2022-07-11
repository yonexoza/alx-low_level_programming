#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int j;
	int half;

	j = _strlen(str);
	if (j % 2 == 0)
		half = j / 2;
	else
		half = (j - 1) / 2 + 1;
	for (i = half; i < j; i++)
	{
		_putchar(str[i]);
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
