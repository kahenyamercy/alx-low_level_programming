#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * strtow - splits a string to words
 * @str: the string to be split
 * Return:pointer to array of strings
 */
char **strtow(char *str)
{
	char **nwords;
	char *word;
	int n = strlen(str);
	int i = 0;
	int num_words = 0;
	int len = 0;
	int start = i;
	int j = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	nwords = malloc(sizeof(char) * (n + 1));
	if (nwords == NULL)
		return (NULL);
	while (i < n)
	{
		if (isspace(str[i]) || str[i] == '\0')
		{
			len = i - start;
			if (len > 0)
			{
				word = malloc((len + 1) * sizeof(char));
				if (word == NULL)
				{
					for (j = 0; j < num_words; j++)
						free(nwords[j]);
					free(nwords);
					return (NULL);
				}
				memcpy(word, str + start, len);
				word[len] = '\0';
				nwords[num_words++] = word;
			}
			start = i + 1;
		}
		i++;
	}
	nwords[num_words] = NULL;
	return (nwords);
}
