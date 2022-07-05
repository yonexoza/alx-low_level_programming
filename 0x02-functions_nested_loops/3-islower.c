#include "main.h"
/**
 * _islower -> hecks for lowercase character
 */

int _islower(int c)
{
	int c;

	if (c >= 'a')
	{
		if (c <= 'z')
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

