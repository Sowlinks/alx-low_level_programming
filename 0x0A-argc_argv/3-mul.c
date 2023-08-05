#include <stdio.h>

/**
 * main- prints its name
 * @argc: count of arguments
 * @argv: strings passed to the program
 * Description: a program that prints it's name
 * Return: always return 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
