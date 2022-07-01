#include <stdio.h>
#include <math.h>
/**
 * main -does main thing
 *
 * Return: returns the main functions
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(log10(x));
	}
	putchar('\n');
	return (0);
}
