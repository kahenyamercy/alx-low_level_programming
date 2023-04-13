#include "main.h"
#include <stdlib.h>
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
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < n || j < len2; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
