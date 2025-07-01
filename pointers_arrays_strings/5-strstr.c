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
int i, j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (NULL);
}
