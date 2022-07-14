#include "main.h"

/**
 * main - does main task
 * @dest: parameter one
 * @src: parameter two
 * Return: Mostly a 0
 */

char *_strcat(char *dest, char *src)
{
	char *comb = dest;

	while (*dest)
	{
		*dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (comb)
	
}
