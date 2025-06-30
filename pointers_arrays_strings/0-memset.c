#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @a: the size of the memory to print
 * @b: the constant byte
 *
 * Return: pointer s
 */

 char *_memset(char *s, char b, unsigned int n)
 {
    unsigned int cpt = 0;
    unsigned int i = 0;

    while (s[cpt])
    {
        cpt++;
    }

    if (cpt < n)
        n = cpt;
    
    for (i = 0; i <= n; i++)
    {
        s[i] = b;
    }
    return (s);
 }