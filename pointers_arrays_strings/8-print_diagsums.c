#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 *
 *@a: tableau de reference
 *@size: taille du tableau
 *
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
if (size == 0)
printf("0, 0");
else if (size == 1)
printf("%d, %d", a[i], a[i]);
else
printf("%d, %d\n", sum1, sum2);
}
