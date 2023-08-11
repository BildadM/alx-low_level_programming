#include <stdio.h>

/**
 * main - program strats here
 *
 * Return: zero if sucessful
 */

int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
