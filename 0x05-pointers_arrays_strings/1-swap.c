#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of the first two integers
 * @a: the first integer to be swapped
 * @b: the secomd to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers.*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

