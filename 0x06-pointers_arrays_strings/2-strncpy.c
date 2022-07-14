#include "main.h"

/**
 * _strncpy - does main task
 * @dest: parameter one
 * @src: parameter two
 * @n: number of para
 * Return: Mostly a 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;
	if (n > srclen)
	{
		n = srclen;
	}
	src = start;
	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (temp);
}
