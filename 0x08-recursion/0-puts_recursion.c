#include "main.h"

/**
 * _puts_recursion - Our very function
 * @s: The parameter to be supplied
 * Return: ) for the most part
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
