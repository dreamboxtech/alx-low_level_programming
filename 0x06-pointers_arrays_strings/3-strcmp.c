#include "main.h"

/**
 * _strcmp - does main task
 * @s1: parameter one
 * @s2: parameter two
 * Return: Mostly a 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
