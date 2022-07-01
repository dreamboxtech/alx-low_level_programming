#include <stdio.h>
/**
 * main -does main thing
 *
 * Return: returns the main functions
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e')
		{
			x = '';
		}
		else if (x == 'q')
		{
			x = '';
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
