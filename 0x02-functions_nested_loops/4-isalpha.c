#include "main.h"
/**
 * _isalpha -> hecks for lowercase character
 * Return: 1 and 0
 * @c: argument
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
