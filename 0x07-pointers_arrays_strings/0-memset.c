#include "main.h"

/**
 * _memset -function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer to a character.
 * @b: a character
 * @n: number of memory area get filled with b.
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
