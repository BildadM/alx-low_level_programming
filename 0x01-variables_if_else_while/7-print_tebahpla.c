#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: zero if successful
 */

int main(void)
{
	char b;

	for (b = 'z' ; b >= 'a' ; b--)
		putchar(b);
	putchar('\n');
	return (0);
}
