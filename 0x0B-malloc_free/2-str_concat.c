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
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	memcpy(s3, s1, len1);
	memcpy(s3 + len1, s2, len2);
	s3[len1 + len2] = '\0';
	return (s3);
}
