#include "main.h"

/**
 * factorial - a function that returns the length of a string.
 * @n: An input para to printing
 * Return: The length of the string
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
