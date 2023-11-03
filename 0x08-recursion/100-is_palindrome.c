#include "main.h"
/**
 * get_length - size
 * @s: pointer to string prmtr
 * Return: length
 */

int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_length(s + 1));
}

/**
 * is_palindrome_helper - palindrome helper
 * @s: pointer to string prmtr
 * @start: position prmtr
 * @end: position prmtr
 * Return: recursion
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string prmtr
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = get_length(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
