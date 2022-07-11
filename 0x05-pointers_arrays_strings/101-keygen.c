#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting point
 * Return: always 0
 */
int main(void)
{
	int sum;
	char i;

	srand(time(NULL));
	while (sum <= 2645)
	{
		i = rand() % 128;
		sum += i;
		putchar(i);
	}
	putchar(2772 - sum);
	return (0);
}
