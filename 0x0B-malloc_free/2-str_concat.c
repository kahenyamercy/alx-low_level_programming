#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat  - concantenates two strings
 * @s1: first string
 * @s2: second string
 * Return:pointer to the newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int i, j;
	char *s3;

	s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	for (j = 0; j < len1; j++)
		s3[j] = s1[j];
	for (i = 0; i < len2; i++)
		s3[len1 + i] = s2[i];
	s3[len1 + i] = '\0';
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s3 == NULL)
		return (NULL);
	return (s3);
}
