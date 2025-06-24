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

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
