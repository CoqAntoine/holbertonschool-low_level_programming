#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 *
 * @s : string de reference
 *
 * @accept : string a chercher
 *
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
char *ptr;
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
ptr = &s[i];
return(ptr);
}
}
}
return (NULL);
}