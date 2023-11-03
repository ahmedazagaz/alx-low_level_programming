#include "main.h"

/**
 * _sqrt_recursion - main function
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_nat_sqrt(n, 1));
}

/**
 * _nat_sqrt - second function
 * @n: integer parameter
 * @i: integer parameter
 * Return: sqrt
 */
int _nat_sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_nat_sqrt(n, i + 1));
}
