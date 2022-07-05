#include "main.h"
/**
 * print_last_digit -> absolute value
 * Return: always 0
 * @n: variable
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;
	_putchar(last_digit);
	return (n);
}
