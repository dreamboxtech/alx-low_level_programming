#include "main.h"
/**
 * _islower - doing things
 *
 * @c: Input test parameter
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
