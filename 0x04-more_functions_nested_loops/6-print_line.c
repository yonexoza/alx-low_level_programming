#include "main.h"

/**
 * print_line - new line
 * @n: variable
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
