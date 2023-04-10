#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of main function with two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int r;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		r = atoi(argv[2]);
		mul = i * r;
		printf("%d\n", mul);
	}
	return (0);
}
