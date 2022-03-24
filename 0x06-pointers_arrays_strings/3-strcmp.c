/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: the numerical difference of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	if (s1[i] == '\0' && s2[i] != '\0')
		return (0 - s2[i]);
		
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (s1[i]);
	
	return (s1[i] - s2[i]);
}
