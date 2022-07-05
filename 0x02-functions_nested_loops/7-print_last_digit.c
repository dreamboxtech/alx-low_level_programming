#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - doing things
 *
 * @l: Input parametre
 * Return: int
 */

int print_last_digit(int l)
{
	int a;

	if (l < 0)
	{
		a = -1 * (l % 10);
	}
	else
	{
		a = l % 10;
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}
