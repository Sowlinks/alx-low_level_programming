#include <stdio.h>
#include <stdlib.h>

/**
 * main- add positive numbers
 * @argc: count of arguments
 * @argv: strings passed to the program
 * Description: a program that prints the result of adding positive numbers
 * Return: always return 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int result, numb, new_numb;

	for (numb = 1; numb != argc; numb++)

		new_numb += atoi(argv[numb]);

		printf("%d\n", new_numb);

	return (0);
}
