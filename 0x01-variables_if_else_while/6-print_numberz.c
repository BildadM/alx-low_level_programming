#include <stdio.h>

/**
 * main -start of the program
 *
 * Return: zero if successful
 */

int main(void)
{
	int b;

	for (b = 0 ; b < 10 ; b++)
		putchar(b + '0');
	putchar('\n');
	return (0);
}
