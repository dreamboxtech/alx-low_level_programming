#include "main.h"

/**
 * _isupper - Does the function of checking
 * @c: variable to be tested
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
