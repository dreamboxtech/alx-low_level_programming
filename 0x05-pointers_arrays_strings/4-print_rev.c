#include "main.h"

/**
 * print_rev - does main task
 * @s: is value
 * Return: returns as 0
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}


}
