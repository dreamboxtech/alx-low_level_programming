#include "main.h"

/**
 * leet - does main task
 * @s: parameter one
 * Return: Mostly a 0
 */

char *leet(char *s)
{
	int i, j;
	
	char *a = "AaEeOoTtlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
