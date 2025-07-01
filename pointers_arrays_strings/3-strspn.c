#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 *
 * @s : string de reference
 *
 * @accept : bytes to find
 *
 * Return: nombre de byte of the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bit = 0;
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
return (bit);
bit++;
}
return (bit);
}
