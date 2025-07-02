#include <stdio.h>

/**
 * main - check the code.
 * @argc: entier
 * @argv: array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
