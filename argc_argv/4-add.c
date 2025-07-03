#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: entier
 * @argv: array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int sum = 0;
int cpt = 1;

while (argc--)
{
sum += atoi(argv[cpt]);
cpt++;
}
printf("%d\n", sum);
return (0);
}
