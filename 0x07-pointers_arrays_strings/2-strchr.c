#include "main.h"

/**
 * _strchr - a function that copys memory area
 * @s: string
 * @c: char to be found
 * @n: number of bytes
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return(NULL);
}