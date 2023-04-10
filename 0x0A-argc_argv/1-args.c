#include <stdio.h>
/**
 * main - main function with two arguments
 * @argc: integer argument count
 * @argv: argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int r = argc;
	(void) argv;

		printf("%d\n", r - 1);
	return (0);
}
