#include "main.h"

/**
 * print_triangle - Does the function of checking
 * @size: Parameter to be supplied
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			_putchar(' ');
		}
		for (j--; j < size; j++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
