#include "main.h"

/**
 * _strncat - does main task
 * @dest: parameter one
 * @src: parameter two
 * @n: number of para
 * Return: Mostly a 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	while (*dest)
	{
		dest++;
	}
	if (n > srclen)
	{
		n = srclen;
	}
	src = start;
	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
