#include "main.h"

/**
 * reverse_array - does main task
 * @a: parameter one
 * @n: parameter two
 * Return: Mostly a 0
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
