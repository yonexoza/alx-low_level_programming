#include "main.h"

/**
 * _strcpy - copies string
 * @src: source for the copy
 * @dest: destionation for the copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = _strlen(src);
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
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
