#include "main.h"

/**
 * _atoi - filters the number
 * @s: string
 * Return: sum
 */

int _atoi(char *s)
{
	int idx1;
	int idx2;
	int i;
	int sign;
	int j;
	int sum;
	int pow;

	sum = 0;
	j = _strlen(s);
	sign = 0;
	for (i = 0; i < j; i++)
	{
		if (s[i] >= 48 || s[i] <= 57)
			idx1 = i;
		if (i != 0 && s[i - 1] == '-')
			sign = 1;
		break;
	}
	for (i = idx1; i < j; i++)
	{
		if (s[i] >= 48 || s[i] <= 57)
			;
		else
		{
			idx2 = i;
			break;
		}
		idx2 = i;
	}
	pow = idx2 - idx1 - 1;
	for (i = idx1; i < idx2; i++)
	{
		sum += (s[i] - '\0') * _pow(pow);
	}
	if (sign)
		sum = -sum;
	return (sum);
}

/**
 * _pow - computes the power of 10
 * @pow: computes pow;
 * Return: product
 */

int _pow(int pow)
{
	int product;
	int i;

	product =  1;
	for (i = 0; i < pow; i++)
	{
		product *= 10;
	}
	return (product);
}

/**
 * _strlen - length of the string
 * @s: string
 * Return: counter
 */

int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
