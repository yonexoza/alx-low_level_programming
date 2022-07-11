#include "main.h"

/**
 * swap_int - swap function
 * @a: integer pointer
 * @b: integer pointer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
