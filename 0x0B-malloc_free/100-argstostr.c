#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenate all arguments
 * @ac: count of argument
 * @av: argument vector
 * Return: pointer to a new string NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int len = 0, i, j;
	int position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		len += strlen(av[i]) + 1;
	}
	newstr = malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			newstr[position++] = av[i][j];
		newstr[position++] = '\n';
	}
	newstr[position] = '\0';
	return (newstr);
}
