#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cct;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";


	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	cct = malloc(sizeof(char) * (len1 + len2 + 1));
	i = j = 0;

	if (cct == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		cct[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cct[i + j] = s2[j];
		j++;
	}
	cct[i + j] = '\0';

	return (cct);
}
