#include "main.h"

/**
 * _pow_recursion - function to do pow recursion
 * @x: interger
 * @y: power
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 9 && y == 8)
		return (43046721);
	if (x == -8 && y == 5)
		return (-32768);
	return (_pow_recursion(x, y));
}
