#include <unistd.h>
#include "main.h"
/**
 * main - does som main tasks
 * Return: Returns main's
 */
int main(void)

{  
	char* st = "_putchar\n";
        int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(st[i]);
	}
	return (0);
}
