#include "main.h"

/**
 * _strlen - does main task
 * @s: is a pointer
 * Return: returns as 0
 */

int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
