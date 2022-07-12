#include "main.h"

/**
 * print_rev - does main task
 * @s: is value
 * Return: returns as 0
 */

void print_rev(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	while (c)
	{
		 _putchar(s[--c]);
	 }
	_putchar('\n');
}
