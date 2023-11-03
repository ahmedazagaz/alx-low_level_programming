#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int len, i = 0;

	if (str == NULL)
		return (NULL);


	len = 0;
	while (str[len] != '\0')
		len++;


	cpy = malloc((len + 1) * sizeof(char));

	if (cpy == NULL)
		return (NULL);


	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	return (cpy);
}
