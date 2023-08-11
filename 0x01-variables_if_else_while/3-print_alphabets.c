#include <stdio.h>

/**
 * main - program starts here.
 * for - sets condition for the loop
 *
 * Return: zero if successful
 */

int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		putchar(b);
	for (b = 'A' ; b <= 'Z' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
