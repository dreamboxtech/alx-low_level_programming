#include "main.h"

/**
 * void _print_rev_recursion - Our very function
 * @s: The parameter to be supplied
 * Return: ) for the most part
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
