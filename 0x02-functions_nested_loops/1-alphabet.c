#include "main.h"
/**
 * main - check the code
 * Return: always 0
 */
int n;
void print_alphabet();

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (n);
}
