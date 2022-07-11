#include "main.h"
/**
 * _strlen - function for length of the string
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
