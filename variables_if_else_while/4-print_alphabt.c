#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c == 'q' || c == 'e')
			++c;
		else
		printf("%c", c);
	printf("\n");
	return (0);
}
