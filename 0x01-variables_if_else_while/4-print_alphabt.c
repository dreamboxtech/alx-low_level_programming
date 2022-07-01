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
			x = '\0';
		}
		else if (x == 'q')
		{
			x = '\0';
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
