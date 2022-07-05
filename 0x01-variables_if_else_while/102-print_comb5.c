#include<stdio.h>
/**
 * main - starting point
 * Return: always 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; y <= 99; y++)
	{
		for (x = y; x <= 99; x++)
		{
			if (x != y)
			{
				putchar((y/10)+48);
				putchar((y%10)+48);
				putchar(32);
				putchar((x/10)+48);
				putchar((x%10)+48);
				if ((y*100)+x != 9899)
				{
					putchar(44);
					putchar(32);
		putchar(10);
	return (0);
}
