#include "main.h"
/**
 * _pow_recursion - entry point
 * @w: integer
 * @z: integer
 * Return: on succes
 */
int _pow_recursion(int w, int z)
{
	if (z < 0)
	{
		return (-1);
	}
	else if (z == 0)
	{
		return (1);
	}
	else
	{
		return (w * _pow_recursion(w, z - 1));
	}
}
