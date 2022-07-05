#include "main.h"
/**
 * _islower -> hecks for lowercase character
 * Return: 1 and 0
 * @c: argument
 */

int _islower(int c)
{
	return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z');
}

