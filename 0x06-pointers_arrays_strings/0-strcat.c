#include "main.h"

/**
 * *_strcat - pointer function
 * @src: char pointer
 * @dest: char pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_ = 0;

	while (dest[index++])
		dest_++;
	for (index = 0; src[index]; index++)
		dest[dest_++] = src[index];
	return (dest);
}
