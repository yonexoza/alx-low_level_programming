
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point
 * @i: vairable
 * Return: always 0
 */
void postitive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;
	if (n > 0)
		printf("%d is positve ", n);
	if (n == 0)
		printf("%d is zero ", n);
	if (n < 0)
	{
		printf("%d is negative ", n);
	}
	return (i);
}

int main(void)
{
	int i;

	i = 0;
	postitive_or_negative(i);

	return (0);
}
