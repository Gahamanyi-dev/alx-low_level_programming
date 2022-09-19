#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: parameter one
 * @b: parameter two
 * Return: doesn't return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
