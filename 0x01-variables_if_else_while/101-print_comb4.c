#include<stdio.h>

/**
 * main - print all combination of three different digits
 * Return: 0 always on success
 */

int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++)/*hundred place*/
	{
		for (ten = (hundred + 1); ten <= '9'; ten++)/*tens=100s+1*/
		{
			for (one = (ten + 1); one <= '9'; one++)/*ones*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
0 comments on commit f2917d8