#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: copy of the pointer to memory
 * @src: pointer to memory
 * @n: number of bytes copied from src to dest
 *
 * Return: pointer s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
