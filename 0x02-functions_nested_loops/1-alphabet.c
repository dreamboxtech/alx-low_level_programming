#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints all alphs
 *
 * Return: really, nothing
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l < 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
