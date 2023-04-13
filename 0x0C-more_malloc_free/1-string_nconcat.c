#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2:second string
 * @n: number of s2 bytes to be concatenated with s1
 * Return: pointer to a new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int j = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 == 0 || len2 == 0)
		return ("");
	s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	while (j < n && s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);

}
