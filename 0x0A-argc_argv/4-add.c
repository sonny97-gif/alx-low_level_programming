#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function with two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int k;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (k = 1; k < argc; k++)
	{
		for (j = 0; argv[k][j]; j++)
		{
			if (argv[k][j] < '0' || argv[k][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
