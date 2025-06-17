#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 15; ++i)
	if (i <= 9)
		putchar('0' + i);
	else if (c <= 'f')
		for (c = 'a'; c <= 'f'; ++c)
			putchar(c);
	putchar ('\n');
	return (0);
}
