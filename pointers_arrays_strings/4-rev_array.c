#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 *
 * @a : array of integer
 *
 * @n : number of element in array
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int fin = n - 1;
	int deb = 0;

	while (deb < fin)
	{
		temp = a[deb];
		a[deb] = a[fin];
		a[fin] = temp;
		fin--;
		deb++;
	}
}
