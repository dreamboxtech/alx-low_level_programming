#include "main.h"
/**
 * _islower - doing things
 *
 * @c: Input test parameter
 * Return: int
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
