#include "main.h"

/**
 * _prime-: prime number function
 * @n: number to be checked
 * @x: number to iterate
 * Description: function for checking the prime
 * Return: returns prime
 */

int _prime(int n, int x)
{
	if (n <= 1)
	{
	return (0);
	}

	if (n % x == 0 && x > 1)
	{
		return (0);
	}

	if ((n / x) < x)
	{
		return (1);
	}

	return (_prime(n, x + 1));
}


/**
 * is_prime_number- prime number function
 * @n: number to check
 * Description: function to return prime number
 * Return: returns prime
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}
