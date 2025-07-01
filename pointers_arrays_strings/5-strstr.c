#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 *
 * @haystack : string de reference
 *
 * @needle : string a chercher
 *
 * Return: pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{
char *ptr;
int i, j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i] == needle[0])
{
ptr = &haystack[i];
if (haystack[i] == needle[j])
return (ptr);
}
}
}
return (NULL);
}
