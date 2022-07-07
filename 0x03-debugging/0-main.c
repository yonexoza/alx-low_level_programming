
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void postitive_or_negative()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positve ", n);
	if (n == 0)
		printf("%d is zero ", n);
	if (n < 0)
	{
		printf("%d is negative ", n);
	}
	return (0);
}
