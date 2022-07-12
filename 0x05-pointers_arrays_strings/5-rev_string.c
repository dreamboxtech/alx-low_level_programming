#include "main.h"

/**
 * rev_string - does main task
 * @s: is value
 * Return: returns as 0
 */

void rev_string(char *s)
{
	int c, i;
	char temp;

	c = 0;
	i = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	while (c)
	{
		temp = s[i];
		s[i++] = s[c];
		s[c] = temp;
	}
	_putchar('\n');
}
