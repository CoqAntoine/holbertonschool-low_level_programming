/**
 * _strlen - check the code
 *
 * @s : string entrant
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int a = 0;

	while(s++)
	{
		a++;
		if (*s == '\0')
			break;
	}

	return (a);
}
