#include <stdio.h>

/**
 * main- mumber of arguments passed into it
 * @argc: count of arguments
 * @argv: strings passed into the program
 * Description: a program that prints the number of argruments passed into it
 * Return: always return 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
