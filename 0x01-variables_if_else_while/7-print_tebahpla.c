#include <stdio.h>
/**
 * main -does main thing
 *
 * Return: returns the main functions
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
