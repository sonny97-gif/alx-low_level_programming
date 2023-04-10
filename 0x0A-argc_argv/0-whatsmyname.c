#include <stdio.h>
/**
 * main - entry point of main function
 * @argc: integer argument count
 * @argv: string argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
