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
	int i, s1_sum, s2_sum;

	s1_sum = 0;
	s2_sum = 0;

	for (i = 0;  s1[i] != '\0'; i++)
		s1_sum += s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		s2_sum += s2[i];

	return (s1_sum - s2_sum);
}
