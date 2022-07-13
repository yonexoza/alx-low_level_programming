#include "main.h"

/**
 * *_strncat -  pointer function
 * @dest: char pointer
 * @src: char pointer
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_ = 0;

	while (dest[index++])
		dest_++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_++] = src[index];
	return (dest);
}
