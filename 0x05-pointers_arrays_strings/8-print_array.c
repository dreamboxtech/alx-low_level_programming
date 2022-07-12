#include "main.h"

/**
 * print_array - does main task
 * @a: is 1
 * @b: is value 2
 * Return: returns as 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	_putchar('\n');
}
