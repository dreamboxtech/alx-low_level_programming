#include "main.h"
/**
 * print_alphabet_x10 - doing things
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int c = 0;
	int l;

	while (c < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		c++;
		_putchar('\n');	
	}	
}
