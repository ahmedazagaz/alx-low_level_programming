#include "main.h"

/**
 * _prime_number - prime help
 * @n: integer prmtrs
 * @i: integer prmtrs
 * Return: recursion or 0
 */
int _prime_number(int i, int n)
{
	if (n <= 0)
		return (0);

	if (n == 1)
		return (0);

	if (n == 2)
		return (0);

	if (i < n)
	{
		if (n % i == 0)
			return (0);

		if ((n % i) != 0)
		{
			return (_prime_number(i + 1, n));
		}
	}
	return (1);
}

/**
 * is_prime_number - prime help
 * @n: integer prmtrs
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if ((_prime_number(i, n)) == 0)
		return (0);
	return (1);
}
