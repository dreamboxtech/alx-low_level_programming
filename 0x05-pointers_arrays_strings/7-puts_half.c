#include "main.h"

/**
 * puts_half - does main task
 * @str: is value
 * Return: returns as 0
 */

void puts_half(char *str)
{
	int i, c;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		c = (i - 1) / 2;
	}
	else
	{
		c = i / 2;
	}
	while (c <= i)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
