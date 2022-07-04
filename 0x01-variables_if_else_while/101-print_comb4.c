#include<stdio.h>
/**
 * main - starting point
 * Return: always 0
 */

int main(void)
{
	int n;
	int x;
	int y;

	for (n = 48; n <= 57; n++)
	{
		for (x = 49; x <= 57; x++)
		{
			for (y = 50; y <= 57; y++)
			{
				if (x > n && y > x)
				{
					putchar(n);
					putchar(x);
					putchar(y);
					if (n != 55 || x != 56 || y != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
