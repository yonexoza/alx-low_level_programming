#include "main.h"
/**
 * print_alphabet -> orints lowercase alphabets
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
