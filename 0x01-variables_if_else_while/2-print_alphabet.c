#include <stdio.h>
/**
 * main -does main thing
 *
 * Return: returns the main functions
 */

int main(void)
{
	int x;

	for(x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar("\n")
	}
	return (0);
}
