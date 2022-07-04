#include<stdio.h>
/**
 * main - starting point
 * Return: always 0
 */

int main(void)
{
	int n;
	int x;

	for (n = 48; n <= 57; n++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > n)
			{
				putchar(n);
				putchar(x);
				if (n != 56 || x != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
