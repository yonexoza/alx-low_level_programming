#include "main.h"
/**
 * _islower -> hecks for lowercase character
 */

int _islower(int c)
{
	int n;

	if (n >= 'a')
	{
		if (n <= 'z')
		{
			_putchar(1);
		}
		else
		{
			_putchar(0);
		}
	}
	else
	{
		_putchar(0);
	}
}

