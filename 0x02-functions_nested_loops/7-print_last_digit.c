#include "main.h"

/**
 * print_last_digit- prints last digit
 * @n: contains the digit whose number will be checked
 * Description: prinnts the last digit of a number
 * Return: m
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit);
	return (last_digit, last_digit);
}
