#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 *         or if str is NULL.
 */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}