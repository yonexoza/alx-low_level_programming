#include<stdio.h>
/**
 * main - starting point
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar(10);
	retun (0);
}
