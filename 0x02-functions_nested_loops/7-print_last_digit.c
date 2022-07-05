#include "main.h"
/**
 * print_last_digit -> absolute value
 * Return: always 0
 * @n: variable
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
