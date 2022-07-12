#include "main.h"

/**
 * swap_int - does main task
 * @a: is a pointer
 * @b: second integer
 * Return: returns as 0
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;

	*b = p;
}
