#include <stdio.h>

/**
 * main- prints all arguments
 * @argc: count of arguments
 * @argv: strings passed to the program
 * Description: a program that prints all arguments it receives
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int numb;

	for (numb = 0; numb < argc; numb++)
		printf("%s\n", argv[numb]);
	return (0);
}
