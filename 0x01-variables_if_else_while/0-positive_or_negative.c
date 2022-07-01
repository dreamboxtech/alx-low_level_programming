#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/**
 * main -does the main thing
 *
 * Return: Returns pos or neg
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(n, " is positive");
	}
	else if (n == 0)
	{
		printf(n, " is zero");
	}
	else if (n < 0)
	{
		printf(n, " is negative");
	}
	return (0);

}


