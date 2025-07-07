#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated string.
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Pointer to the new string containing s1 followed by s2,
 *         or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len = 0, len2 = 0;
	char *s;

	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc(sizeof(char) * (len + 1) + sizeof(char) * (len2));
	if (s == NULL)
		return (NULL);
	if (s1 == NULL)
		s[0] = ' ';
	else
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
	if (s2 == NULL)
		s[i + 0] = ' ';
	else
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[j + i] = s2[j];
		}
	s[i + j] = '\0';
	return (s);
}
