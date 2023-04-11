#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to string
 * Return: pointer to duplicated string NULL if there is insufficient
 * memory available
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		str1 = (char *)malloc(sizeof(char) * (i + 1));

	if (str1 == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		str1[j] = str[j];

	return (str1);
}
