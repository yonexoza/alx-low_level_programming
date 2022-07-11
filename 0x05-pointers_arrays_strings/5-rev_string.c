#include "main.h"

/**
 * rev_string - reverse string
 * @s: character pointer
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char temp;

	k = _strlen(s);
	j = 0;

	for (i = k; i > k / 2; i--)
	{
		_putchar(i + 48);
		_putchar(' ');
		temp = s[i];
		s[i] = s[j++];
		s[j] = temp;

	}
}

/**
 * _strlen - length of the string
 * @s: string
 * Return: return counter
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
