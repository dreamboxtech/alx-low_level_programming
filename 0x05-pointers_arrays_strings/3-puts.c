#include "main.h"

/**
 * _puts - does main task
 * @str: is a pointer
 * Return: returns as 0
 */

void _puts(char *str)
{
	int i;
	int c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
