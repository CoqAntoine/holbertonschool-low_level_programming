#include "main.h"
#include <stdio.h>

/**
 * _strchr - prints buffer in hexa
 * @s: string to read
 * @c: character to find
 *
 * Return: pointer that point to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
unsigned int i = 0;
char *ptr;

for (i = 0; s[i] != c && s[i] != '\0'; i++)
{
}
if (s[i] == c)
{
ptr = &s[i];
return (ptr);
}
if (s[i] == '\0')
return (NULL);
}
