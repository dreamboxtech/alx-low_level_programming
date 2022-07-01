#include <stdio.h>
/**
 * main -does main thing
 *
 * Return: returns the main functions
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; ++x)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(', ');
		}
	}
	putchar('\n');
	return (0);
}
