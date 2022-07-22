#include "main.h"

/**
 * _strcat - does main task
 * @dest: parameter one
 * @src: parameter two
 * Return: Mostly a 0
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
