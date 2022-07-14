#include "main.h"

/**
 * rot13 - does main task
 * @s: parameter one
 * Return: Mostly a 0
 */

char *rot13(char *s)
{
	int i, j;

	char *a = "ABCDEFGHIJKLMabcdefghijklm";
	char *b = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}

	return (s);
}
